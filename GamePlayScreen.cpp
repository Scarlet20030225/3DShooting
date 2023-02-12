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
		backBaseGraph	   = LoadGraph("data/graph/BackBase.png");
		backStar1Graph	   = LoadGraph("data/graph/BackStar1.png");
		backStar2Graph	   = LoadGraph("data/graph/BackStar2.png");
		backStar3Graph	   = LoadGraph("data/graph/BackStar3.png");

		backBaseX = 0;
		backBaseY = 0;

		backStar1X[0] = 0.0f;
		backStar1X[1] = screenSizeX;

		backStar2X[0] = 0.0f;
		backStar2X[1] = screenSizeX;

		backStar3X[0] = 0.0f;
		backStar3X[1] = screenSizeX;

		backStarY = 0.0f;

		scrollSpeed[0] = scrollSpeed3;
		scrollSpeed[1] = scrollSpeed2;
		scrollSpeed[2] = scrollSpeed1;
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
		DrawGraph(backBaseX, backBaseY, backBaseGraph, TRUE);

		DrawGraph(backStar1X[0], backStarY, backStar1Graph, TRUE);
		DrawGraph(backStar1X[1], backStarY, backStar1Graph, TRUE);
		if (backStar1X[0] + screenSizeX <= 0)
		{
			backStar1X[0] = screenSizeX;
		}
		if (backStar1X[1] + screenSizeX <= 0)
		{
			backStar1X[1] = screenSizeX;
		}

		DrawGraph(backStar2X[0], backStarY, backStar2Graph, TRUE);
		DrawGraph(backStar2X[1], backStarY, backStar2Graph, TRUE);
		if (backStar2X[0] + screenSizeX <= 0)
		{
			backStar2X[0] = screenSizeX;
		}
		if (backStar2X[1] + screenSizeX <= 0)
		{
			backStar2X[1] = screenSizeX;
		}

		DrawGraph(backStar3X[0], backStarY, backStar3Graph, TRUE);
		DrawGraph(backStar3X[1], backStarY, backStar3Graph, TRUE);
		if (backStar3X[0] + screenSizeX <= 0)
		{
			backStar3X[0] = screenSizeX;
		}
		if (backStar3X[1] + screenSizeX <= 0)
		{
			backStar3X[1] = screenSizeX;
		}

		DrawGraph(0, 0, screenFrameGraph, TRUE);
	}
}