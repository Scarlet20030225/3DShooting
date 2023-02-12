#pragma once

namespace Lib
{
	/// <summary>
	/// �X�N���[����
	/// </summary>
	constexpr auto screenSizeX = 1920;

	/// <summary>
	/// �X�N���[������
	/// </summary>
	constexpr auto screenSizeY = 1080;

	/// <summary>
	/// �J���[�r�b�g��
	/// </summary>
	constexpr auto colorBitDepth = 32;

	/// <summary>
	/// �t���[����60fps��
	/// </summary>
	constexpr auto fps = 60;

	/// <summary>
	/// �҂�����
	/// </summary>
	constexpr auto deltaTime = 1000 / fps;

	/// <summary>
	/// ��O�N���b�v����
	/// </summary>
	constexpr auto cameraNear = 1;

	/// <summary>
	/// ���N���b�v����
	/// </summary>
	constexpr auto cameraFar = 2000;

	/// <summary>
	/// �J������Z���W
	/// </summary>
	constexpr auto cameraPosZ = -1000;

	/// <summary>
	/// �J������Z���W�����_
	/// </summary>
	constexpr auto cameraGazingPosZ = 0;

	/// <summary>
	/// �X�N���[���X�s�[�h�P
	/// </summary>
	constexpr auto scrollSpeed1 = 1;

	/// <summary>
	/// �X�N���[���X�s�[�h2
	/// </summary>
	constexpr auto scrollSpeed2 = 2;

	/// <summary>
	/// �X�N���[���X�s�[�h3
	/// </summary>
	constexpr auto scrollSpeed3 = 3;
}