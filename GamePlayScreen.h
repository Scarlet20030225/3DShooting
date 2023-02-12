#pragma once

namespace App
{
	class GamePlayScreen
	{
	public:
		GamePlayScreen();
		~GamePlayScreen();

		void backScroll(float deltaTime);
		void Draw();

	private:
		int screenFrameGraph;
		int lostEnduranceGraph;
		int lostLifeGraph;

		int backBaseGraph;
		int backBaseX;
		int backBaseY;

		int backStar1Graph;
		float backStar1X[2];

		int backStar2Graph;
		float backStar2X[2];

		int backStar3Graph;
		float backStar3X[2];

		float backStarY;

		float scrollSpeed[3];
	};
}