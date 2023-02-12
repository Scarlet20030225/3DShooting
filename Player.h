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
		/// �R���X�g���N�^
		/// </summary>
		Player();

		/// <summary>
		/// �f�X�g���N�^
		/// </summary>
		~Player();

		/// <summary>
		/// �X�V����
		/// </summary>
		/// <param name="deltaTime"></param>
		void Update(float deltaTime);

		/// <summary>
		/// �`�揈��
		/// </summary>
		void Draw();

		int mode;

		Lib::Sphere GetCollisionSphere() { return mCollisionSphere; }

	private:
		/// <summary>
		/// �ړ��\�Ȕ͈�
		/// </summary>
		void MovableRange();

		/// <summary>
		/// ���[�h�`�F���W
		/// </summary>
		void ModeChange();

		VECTOR mPos;
		VECTOR mDir;
		int mModelHandle;	// ���f���n���h��
		float mSpeed;		// �ړ����x
		float mShotTime;	// ���ˊԊu

		Lib::Sphere mCollisionSphere;		// �����蔻�苅
	};
}