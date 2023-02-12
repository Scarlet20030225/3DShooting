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
		/// �R���X�g���N�^
		/// </summary>
		GameManager();
		/// <summary>
		/// �f�X�g���N�^
		/// </summary>
		~GameManager();
		/// <summary>
		/// �Q�[�����[�v
		/// </summary>
		void Loop();
		/// <summary>
		/// �㏈��
		/// </summary>
		void Finalize();

	private:
		Camera* camera;
		GamePlayScreen* gamePlayScreen;
	};
}