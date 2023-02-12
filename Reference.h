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
}