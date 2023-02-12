#pragma once

namespace Lib
{
	/// <summary>
	/// スクリーン幅
	/// </summary>
	constexpr auto screenSizeX = 1920;
	/// <summary>
	/// スクリーン高さ
	/// </summary>
	constexpr auto screenSizeY = 1080;
	/// <summary>
	/// カラービット数
	/// </summary>
	constexpr auto colorBitDepth = 32;
	/// <summary>
	/// フレームを60fpsに
	/// </summary>
	constexpr auto fps = 60;
	/// <summary>
	/// 待ち時間
	/// </summary>
	constexpr auto deltaTime = 1000 / fps;
	/// <summary>
	/// 手前クリップ距離
	/// </summary>
	constexpr auto cameraNear = 1;
	/// <summary>
	/// 奥クリップ距離
	/// </summary>
	constexpr auto cameraFar = 2000;
	/// <summary>
	/// カメラのZ座標
	/// </summary>
	constexpr auto cameraPosZ = -1000;
	/// <summary>
	/// カメラのZ座標注視点
	/// </summary>
	constexpr auto cameraGazingPosZ = 0;
}