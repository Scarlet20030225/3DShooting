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
			//　処理開始時刻を所得
			auto start = std::chrono::system_clock::now();

			//画面更新処理
			ClearDrawScreen();


			ScreenFlip();

			// 1フレームにかかった時間を計算
			auto end = std::chrono::system_clock::now();
			auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

			// 1フレームにかかった時間が指定の時間以下であれば待機する
			if (elapsed.count() < Lib::deltaTime)
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(Lib::deltaTime - elapsed.count()));
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