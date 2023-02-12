#include<chrono>
#include<thread>
#include"GameManaget.h"
#pragma warning(disable:4996)

using namespace Lib;

namespace App
{
	GameManager::GameManager()
	{
		// DxLib������
		ChangeWindowMode(TRUE);
		SetGraphMode(screenSizeX, screenSizeY, colorBitDepth);
		DxLib_Init();

		//---------------------------------------------------------------------------------------------------------
		// �R���X�g���N�^�Ăяo��
		//---------------------------------------------------------------------------------------------------------
		camera		   = new App::Camera();
		gamePlayScreen = new App::GamePlayScreen();
		player		   = new App::Player();
	}

	GameManager::~GameManager()
	{
		delete camera;
		delete gamePlayScreen;
		delete player;

		camera		   = nullptr;
		gamePlayScreen = nullptr;
		player		   = nullptr;
	}

	void GameManager::Loop()
	{
		while (ProcessMessage() == 0)
		{
			// �����J�n����������
			auto start = std::chrono::system_clock::now();

			//---------------------------------------------------------------------------------------------------------
			// �X�V����
			//---------------------------------------------------------------------------------------------------------
			gamePlayScreen->backScroll(deltaTime);
			player->Update(deltaTime);

			// ��ʍX�V
			ClearDrawScreen();

			//---------------------------------------------------------------------------------------------------------
			// �`�揈��
			//---------------------------------------------------------------------------------------------------------
			gamePlayScreen->Draw();
			player->Draw();

			// �`����m��
			ScreenFlip();

			// 1�t���[���ɂ����������Ԃ��v�Z
			auto end = std::chrono::system_clock::now();
			auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

			// 1�t���[���ɂ����������Ԃ��w��̎���(deltaTime)�ȉ��ł���Αҋ@����
			if (elapsed.count() < deltaTime)
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(deltaTime - elapsed.count()));
			}

			// ESCAPE�L�[�������ꂽ�烋�[�v�𔲂���
			if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
			{
				break;
			}
		}
	}

	void GameManager::Finalize()
	{
		DxLib_End();
	}
}