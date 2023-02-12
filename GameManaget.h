#pragma once
#include"DxLib.h"
#include"Reference.h"
#include"Camera.h"
#include"GamePlayScreen.h"

namespace App
{
	class GameManager
	{
	public:
		/// <summary>
		/// コンストラクタ
		/// </summary>
		GameManager();
		/// <summary>
		/// デストラクタ
		/// </summary>
		~GameManager();
		/// <summary>
		/// ゲームループ
		/// </summary>
		void Loop();
		/// <summary>
		/// 後処理
		/// </summary>
		void Finalize();

	private:
		Camera* camera;
		GamePlayScreen* gamePlayScreen;
	};
}