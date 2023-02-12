#include "GameManaget.h"
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
		while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
		{
			//��ʍX�V����
			ClearDrawScreen();
			ScreenFlip();
		}
	}

	void GameManager::Finalize()
	{
		DxLib_End();
	}
}