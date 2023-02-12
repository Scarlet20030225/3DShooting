#pragma once

namespace Lib
{
	/// <summary>
	/// �X�N���[����
	/// </summary>
	const float screenSizeX = 1920.0f;

	/// <summary>
	/// �X�N���[������
	/// </summary>
	const float screenSizeY = 1080.0f;

	/// <summary>
	/// �J���[�r�b�g��
	/// </summary>
	const int colorBitDepth = 32;

	/// <summary>
	/// �t���[����60fps��
	/// </summary>
	const int fps = 60;

	/// <summary>
	/// �҂�����
	/// </summary>
	const int deltaTime = 1000 / fps;

	/// <summary>
	/// ��O�N���b�v����
	/// </summary>
	const float cameraNear = 1.0f;

	/// <summary>
	/// ���N���b�v����
	/// </summary>
	const float cameraFar = 2000.0f;

	/// <summary>
	/// �J������Z���W
	/// </summary>
	const float cameraPosZ = -1000.0f;

	/// <summary>
	/// �J������Z���W�����_
	/// </summary>
	const float cameraGazingPosZ = 0.0f;

	/// <summary>
	/// �X�N���[���X�s�[�h�P
	/// </summary>
	const float scrollSpeed1 = 0.05f;

	/// <summary>
	/// �X�N���[���X�s�[�h2
	/// </summary>
	const float scrollSpeed2 = 0.10f;

	/// <summary>
	/// �X�N���[���X�s�[�h3
	/// </summary>
	const float scrollSpeed3 = 0.15f;

	/// <summary>
	/// �v���C���[�̑��x
	/// </summary>
	const float playerSpeed = 1.0f;

	/// <summary>
	/// ���˒e�̔��˃C���^�[�o��
	/// </summary>
	const float rapidInterval = 50.0f;

	/// <summary>
	/// �ђʒe�̔��˃C���^�[�o��
	/// </summary>
	const float penetrateInterval = 250.0f;

	/// <summary>
	/// �~�T�C���̔��˃C���^�[�o��
	/// </summary>
	const float missileInterval = 600.0f;
}