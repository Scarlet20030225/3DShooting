#pragma once
#include<DxLib.h>

namespace Lib
{
	/// <summary>
	/// �x�N�g�����m�̉��Z
	/// </summary>
	/// <param name="lhs"></param>
	/// <param name="rhs"></param>
	/// <returns></returns>
	VECTOR operator+(const VECTOR& lhs, const VECTOR& rhs);

	/// <summary>
	/// �x�N�g�����m�̌��Z
	/// </summary>
	/// <param name="lhs"></param>
	/// <param name="rhs"></param>
	/// <returns></returns>
	VECTOR operator-(const VECTOR& lhs, const VECTOR& rhs);

	/// <summary>
	/// �x�N�g���̃X�J���[�{
	/// </summary>
	/// <param name="s"></param>
	/// <param name="rhs"></param>
	/// <returns></returns>
	VECTOR operator*(float s, const VECTOR& rhs);

	/// <summary>
	/// �x�N�g���̃X�J���[�{
	/// </summary>
	/// <param name="lhs"></param>
	/// <param name="s"></param>
	/// <returns></returns>
	VECTOR operator*(const VECTOR& lhs, float s);

	/// <summary>
	/// += VECTOR�̉��Z�q
	/// </summary>
	/// <param name="lhs"></param>
	/// <param name="rhs"></param>
	/// <returns></returns>
	VECTOR operator+=(VECTOR& lhs, const VECTOR& rhs);

	/// <summary>
	/// *= VECTOR�̃X�J���[�{�̕���������Z�q
	/// </summary>
	/// <param name="lhs"></param>
	/// <param name="rhs"></param>
	/// <returns></returns>
	VECTOR operator*=(VECTOR& lhs, float rhs);

	/// <summary>
	/// 2�̃x�N�g���̊p�x�͂قړ�����?
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	bool IsNearAngle(const VECTOR& v1, const VECTOR& v2);

	/// <summary>
	/// nowVec����dirVec�̍ŒZ�̉�]�����𒲂ׂ�(Y����]��z��)
	/// </summary>
	/// <param name="nowVec"></param>
	/// <param name="dirVec"></param>
	/// <returns></returns>
	float CalcRotationDirectionYAxis(const VECTOR& nowVec, const VECTOR& dirVec);

	/// <summary>
	/// nowVec����aimVec�Ɍ�������degreeVerocity�̑��x��Y��]����
	/// </summary>
	/// <param name="nowVec"></param>
	/// <param name="aimVec"></param>
	/// <param name="degreeVerocity"></param>
	/// <returns></returns>
	VECTOR RotateForAimVecYAxis(const VECTOR& nowVec, const VECTOR& aimVec, float degreeVerocity);
}