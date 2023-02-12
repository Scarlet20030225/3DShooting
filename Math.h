#pragma once
#include<DxLib.h>

namespace Lib
{
	/// <summary>
	/// ベクトル同士の加算
	/// </summary>
	/// <param name="lhs"></param>
	/// <param name="rhs"></param>
	/// <returns></returns>
	VECTOR operator+(const VECTOR& lhs, const VECTOR& rhs);

	/// <summary>
	/// ベクトル同士の減算
	/// </summary>
	/// <param name="lhs"></param>
	/// <param name="rhs"></param>
	/// <returns></returns>
	VECTOR operator-(const VECTOR& lhs, const VECTOR& rhs);

	/// <summary>
	/// ベクトルのスカラー倍
	/// </summary>
	/// <param name="s"></param>
	/// <param name="rhs"></param>
	/// <returns></returns>
	VECTOR operator*(float s, const VECTOR& rhs);

	/// <summary>
	/// ベクトルのスカラー倍
	/// </summary>
	/// <param name="lhs"></param>
	/// <param name="s"></param>
	/// <returns></returns>
	VECTOR operator*(const VECTOR& lhs, float s);

	/// <summary>
	/// += VECTORの演算子
	/// </summary>
	/// <param name="lhs"></param>
	/// <param name="rhs"></param>
	/// <returns></returns>
	VECTOR operator+=(VECTOR& lhs, const VECTOR& rhs);

	/// <summary>
	/// *= VECTORのスカラー倍の複合代入演算子
	/// </summary>
	/// <param name="lhs"></param>
	/// <param name="rhs"></param>
	/// <returns></returns>
	VECTOR operator*=(VECTOR& lhs, float rhs);

	/// <summary>
	/// 2つのベクトルの角度はほぼ同じか?
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	bool IsNearAngle(const VECTOR& v1, const VECTOR& v2);

	/// <summary>
	/// nowVecからdirVecの最短の回転方向を調べる(Y軸回転を想定)
	/// </summary>
	/// <param name="nowVec"></param>
	/// <param name="dirVec"></param>
	/// <returns></returns>
	float CalcRotationDirectionYAxis(const VECTOR& nowVec, const VECTOR& dirVec);

	/// <summary>
	/// nowVecからaimVecに向かってdegreeVerocityの速度でY回転する
	/// </summary>
	/// <param name="nowVec"></param>
	/// <param name="aimVec"></param>
	/// <param name="degreeVerocity"></param>
	/// <returns></returns>
	VECTOR RotateForAimVecYAxis(const VECTOR& nowVec, const VECTOR& aimVec, float degreeVerocity);
}