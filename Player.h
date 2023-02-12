#pragma once
#include"DxLib.h"
#include"Math.h"
#include"Collision.h"

namespace App
{
	class Player
	{
	public:
		/// <summary>
		/// コンストラクタ
		/// </summary>
		Player();

		/// <summary>
		/// デストラクタ
		/// </summary>
		~Player();

		/// <summary>
		/// 更新処理
		/// </summary>
		/// <param name="deltaTime"></param>
		void Update(float deltaTime);

		/// <summary>
		/// 描画処理
		/// </summary>
		void Draw();

		int mode;

		Lib::Sphere GetCollisionSphere() { return mCollisionSphere; }

	private:
		/// <summary>
		/// 移動可能な範囲
		/// </summary>
		void MovableRange();

		/// <summary>
		/// モードチェンジ
		/// </summary>
		void ModeChange();

		VECTOR mPos;
		VECTOR mDir;
		int mModelHandle;	// モデルハンドル
		float mSpeed;		// 移動速度
		float mShotTime;	// 発射間隔

		Lib::Sphere mCollisionSphere;		// 当たり判定球
	};
}