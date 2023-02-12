#include"DxLib.h"
#include"Camera.h"
#include"Reference.h"

using namespace Lib;

namespace App
{
	Camera::Camera()
	{
		SetCameraNearFar(Lib::cameraNear, Lib::cameraFar);
		SetCameraPositionAndTarget_UpVecY(VGet(static_cast<float>(Lib::screenSizeX) / 2, static_cast<float>(Lib::screenSizeY), Lib::cameraPosZ)
			, VGet(static_cast<float>(Lib::screenSizeX) / 2, static_cast<float>(Lib::screenSizeY), Lib::cameraGazingPosZ));
	}

	Camera::~Camera() {}
}