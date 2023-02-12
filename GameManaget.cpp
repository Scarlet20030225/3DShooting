#include<chrono>
#include<thread>
#include"GameManaget.h"
#pragma warning(disable:4996)

using namespace Lib;

namespace App
{
	GameManager::GameManager()
	{
		// DxLib初期化
		ChangeWindowMode(TRUE);
		SetGraphMode(screenSizeX, screenSizeY, colorBitDepth);
		DxLib_Init();

		//---------------------------------------------------------------------------------------------------------
		// コンストラクタ呼び出し
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
			// 処理開始時刻を所得
			auto start = std::chrono::system_clock::now();

			//---------------------------------------------------------------------------------------------------------
			// 更新処理
			//---------------------------------------------------------------------------------------------------------
			gamePlayScreen->backScroll(deltaTime);
			player->Update(deltaTime);

			// 画面更新
			ClearDrawScreen();

			//---------------------------------------------------------------------------------------------------------
			// 描画処理
			//---------------------------------------------------------------------------------------------------------
			gamePlayScreen->Draw();
			player->Draw();

			// 描画を確定
			ScreenFlip();

			// 1フレームにかかった時間を計算
			auto end = std::chrono::system_clock::now();
			auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

			// 1フレームにかかった時間が指定の時間(deltaTime)以下であれば待機する
			if (elapsed.count() < deltaTime)
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(deltaTime - elapsed.count()));
			}

			// ESCAPEキーが押されたらループを抜ける
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