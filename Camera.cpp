#include"DxLib.h"
#include"Camera.h"
#include"Reference.h"

using namespace Lib;

namespace App
{
	Camera::Camera()
	{
		SetCameraNearFar(cameraNear, cameraFar);
		SetCameraPositionAndTarget_UpVecY(VGet(static_cast<float>(screenSizeX) / 2, static_cast<float>(screenSizeY) / 2, cameraPosZ)
			, VGet(static_cast<float>(screenSizeX) / 2, static_cast<float>(screenSizeY) / 2, cameraGazingPosZ));
	}

	Camera::~Camera() {}
}