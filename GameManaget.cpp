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
		SetGraphMode(Lib::screenSizeX, Lib::screenSizeY, Lib::colorBitDepth);
		DxLib_Init();
	}

	GameManager::~GameManager()
	{
	}

	void GameManager::Loop()
	{
		while (ProcessMessage() == 0)
		{
			//�@�����J�n����������
			auto start = std::chrono::system_clock::now();

			//��ʍX�V����
			ClearDrawScreen();


			ScreenFlip();

			// 1�t���[���ɂ����������Ԃ��v�Z
			auto end = std::chrono::system_clock::now();
			auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

			// 1�t���[���ɂ����������Ԃ��w��̎��Ԉȉ��ł���Αҋ@����
			if (elapsed.count() < Lib::deltaTime)
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(Lib::deltaTime - elapsed.count()));
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