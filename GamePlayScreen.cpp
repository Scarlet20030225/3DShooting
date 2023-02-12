#include"DxLib.h"
#include"GamePlayScreen.h"
#include"Reference.h"

using namespace Lib;

namespace App
{
	GamePlayScreen::GamePlayScreen()
	{
		screenFrameGraph   = LoadGraph("data/graph/ScreenFrame.png");
		lostEnduranceGraph = LoadGraph("data/graph/LostEndurance.png");
		lostLifeGraph	   = LoadGraph("data/graph/LostLife.png");
		backStar1Graph	   = LoadGraph("data/graph/BackStar1.png");
		backStar2Graph	   = LoadGraph("data/graph/BackStar2.png");
		backStar3Graph	   = LoadGraph("data/graph/BackStar3.png");

		GetGraphSize(backStar1Graph, &backStarW, &backStarH);

		backStar1X[0] = 0.0f;
		backStar1X[1] = Lib::screenSizeX;

		backStar2X[0] = 0.0f;
		backStar2X[1] = Lib::screenSizeX;

		backStar3X[0] = 0.0f;
		backStar3X[1] = Lib::screenSizeX;

		backStarY = 0.0f;

		scrollSpeed[0] = static_cast<float>(Lib::scrollSpeed3) / 6;
		scrollSpeed[1] = static_cast<float>(Lib::scrollSpeed2) / 6;
		scrollSpeed[2] = static_cast<float>(Lib::scrollSpeed1) / 6;
	}

	GamePlayScreen::~GamePlayScreen()
	{
	}

	void GamePlayScreen::backScroll(float deltaTime)
	{
		backStar1X[0] -= scrollSpeed[0] * deltaTime;
		backStar1X[1] -= scrollSpeed[0] * deltaTime;

		backStar2X[0] -= scrollSpeed[1] * deltaTime;
		backStar2X[1] -= scrollSpeed[1] * deltaTime;

		backStar3X[0] -= scrollSpeed[2] * deltaTime;
		backStar3X[1] -= scrollSpeed[2] * deltaTime;
	}

	void GamePlayScreen::Draw()
	{
		DrawGraph(backStar1X[0], backStarY, backStar1Graph, TRUE);
		DrawGraph(backStar1X[1], backStarY, backStar1Graph, TRUE);
		if (backStar1X[0] + backStarW == 0)
		{
			backStar1X[0] = 1920.0f;
		}
		if (backStar1X[1] + backStarW == 0)
		{
			backStar1X[1] = 1920.0f;
		}

		DrawGraph(backStar2X[0], backStarY, backStar2Graph, TRUE);
		DrawGraph(backStar2X[1], backStarY, backStar2Graph, TRUE);
		if (backStar2X[0] + backStarW == 0)
		{
			backStar2X[0] = 1920.0f;
		}
		if (backStar2X[1] + backStarW == 0)
		{
			backStar2X[1] = 1920.0f;
		}

		DrawGraph(backStar3X[0], backStarY, backStar3Graph, TRUE);
		DrawGraph(backStar3X[1], backStarY, backStar3Graph, TRUE);
		if (backStar3X[0] + backStarW == 0)
		{
			backStar3X[0] = 1920.0f;
		}
		if (backStar3X[1] + backStarW == 0)
		{
			backStar3X[1] = 1920.0f;
		}

		DrawGraph(0, 0, screenFrameGraph, TRUE);
	}
}