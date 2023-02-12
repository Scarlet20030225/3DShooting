#pragma once

namespace Lib
{
	/// <summary>
	/// スクリーン幅
	/// </summary>
	const float screenSizeX = 1920.0f;

	/// <summary>
	/// スクリーン高さ
	/// </summary>
	const float screenSizeY = 1080.0f;

	/// <summary>
	/// カラービット数
	/// </summary>
	const int colorBitDepth = 32;

	/// <summary>
	/// フレームを60fpsに
	/// </summary>
	const int fps = 60;

	/// <summary>
	/// 待ち時間
	/// </summary>
	const int deltaTime = 1000 / fps;

	/// <summary>
	/// 手前クリップ距離
	/// </summary>
	const float cameraNear = 1.0f;

	/// <summary>
	/// 奥クリップ距離
	/// </summary>
	const float cameraFar = 2000.0f;

	/// <summary>
	/// カメラのZ座標
	/// </summary>
	const float cameraPosZ = -1000.0f;

	/// <summary>
	/// カメラのZ座標注視点
	/// </summary>
	const float cameraGazingPosZ = 0.0f;

	/// <summary>
	/// スクロールスピード１
	/// </summary>
	const float scrollSpeed1 = 0.05f;

	/// <summary>
	/// スクロールスピード2
	/// </summary>
	const float scrollSpeed2 = 0.10f;

	/// <summary>
	/// スクロールスピード3
	/// </summary>
	const float scrollSpeed3 = 0.15f;

	/// <summary>
	/// プレイヤーの速度
	/// </summary>
	const float playerSpeed = 1.0f;

	/// <summary>
	/// 速射弾の発射インターバル
	/// </summary>
	const float rapidInterval = 50.0f;

	/// <summary>
	/// 貫通弾の発射インターバル
	/// </summary>
	const float penetrateInterval = 250.0f;

	/// <summary>
	/// ミサイルの発射インターバル
	/// </summary>
	const float missileInterval = 600.0f;
}