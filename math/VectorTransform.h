#pragma once

#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"



#include "Matrix4x4.h"

#include<cassert>
#include<cmath>
class VectorTransform {
public:
	VectorTransform();
	~VectorTransform();

	static float Dot(const Vector3& v1, const Vector3& v2);
	static float Length(const Vector3& v);
#pragma region 二次元

#pragma region +=*
	/// <summary>
	/// 二次元ベクトルの足し算
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	Vector2 Add(Vector2 v1, Vector2 v2);

	/// <summary>
	/// 二次元ベクトルの引き算
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	Vector2 Subtract(Vector2 v1, Vector2 v2);

	/// <summary>
	/// 二次元ベクトルの掛け算
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	Vector2 Multiply(Vector2 v1, Vector2 v2);

	/// <summary>
	/// 二次元ベクトルの割り算
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	Vector2 Divide(Vector2 v1, Vector2 v2);

	/// <summary>
	/// 二次元ベクトルと2x2行列の掛け算
	/// </summary>
	/// <param name="vector"></param>
	/// <param name="matrix"></param>
	/// <returns></returns>
	//Vector2 Multiply(Vector2 vector, Matrix2x2 matrix);

#pragma endregion

#pragma endregion

#pragma region 三次元
#pragma region +=*
	/// <summary>
	/// 三次元ベクトルの足し算
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	static Vector3 Add(Vector3 v1, Vector3 v2);

	/// <summary>
	/// 三次元ベクトルの引き算
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	static Vector3 Subtract(Vector3 v1, Vector3 v2);

	/// <summary>
	/// 三次元ベクトルの掛け算
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	Vector3 Multiply(Vector3 v1, Vector3 v2);

	/// <summary>
	/// 三次元ベクトルの割り算
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	Vector3 Divide(Vector3 v1, Vector3 v2);

	/// <summary>
	/// 三次元ベクトルと3x3行列の掛け算
	/// </summary>
	/// <param name="vector"></param>
	/// <param name="matrix"></param>
	/// <returns></returns>
	//Vector3 Multiply(Vector3 v, Matrix3x3 matrix);

	static Vector3 Transform(const Vector3& v, const Matrix4x4& matrix);

	static Vector3 TransformNormal(const Vector3& v, const Matrix4x4& m);

	static Vector3 Normalize(const Vector3& v);

#pragma endregion
#pragma endregion

#pragma region 四次元
#pragma region +=*
	/// <summary>
	/// 四次元ベクトルの足し算
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	Vector4 Add(Vector4 v1, Vector4 v2);

	/// <summary>
	/// 四次元ベクトルの引き算
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	Vector4 Subtract(Vector4 v1, Vector4 v2);

	/// <summary>
	/// 四次元ベクトルの掛け算
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	Vector4 Multiply(Vector4 v1, Vector4 v2);

	/// <summary>
	/// 四次元ベクトルの割り算
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	Vector4 Divide(Vector4 v1, Vector4 v2);

	/// <summary>
	/// 四次元ベクトルと4x4行列の掛け算
	/// </summary>
	/// <param name="vector"></param>
	/// <param name="matrix"></param>
	/// <returns></returns>
	Vector4 Multiply(Vector4 v, Matrix4x4 matrix);

	/// <summary>
	/// 四次元ベクトルに4x4単位行列書き込む
	/// </summary>
	/// <returns></returns>
	Vector4 Identity4x4();

	/// <summary>
	/// 向き
	/// </summary>
	/// <param name="v"></param>
	/// <param name="m"></param>
	/// <returns></returns>
	//Vector3 TransformNormal(const Vector3& v, const Matrix4x4& m);
#pragma endregion

#pragma region

private:
};