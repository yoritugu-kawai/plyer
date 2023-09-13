#include "VectorTransform.h"

VectorTransform::VectorTransform() {}

VectorTransform::~VectorTransform() {}

Vector2 VectorTransform::Add(Vector2 v1, Vector2 v2) {
	Vector2 result = {};

	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;

	return result;
}

Vector2 VectorTransform::Subtract(Vector2 v1, Vector2 v2) {
	Vector2 result = {};

	result.x = v1.x - v2.x;
	result.y = v1.y - v2.y;

	return result;
}

Vector2 VectorTransform::Multiply(Vector2 v1, Vector2 v2) {
	Vector2 result = {};
	result.x = v1.x * v2.x;
	result.y = v1.y * v2.y;
	return result;
}

Vector2 VectorTransform::Divide(Vector2 v1, Vector2 v2) {
	Vector2 result = {};
	result.x = v1.x / v2.x;
	result.y = v1.y / v2.y;
	return result;
}

//Vector2 VectorTransform::Multiply(Vector2 vector, Matrix2x2 matrix) {
//
//	Vector2 result;
//	result.x = vector.x * matrix.m[0][0] + vector.y * matrix.m[1][0];
//	result.y = vector.x * matrix.m[0][1] + vector.y * matrix.m[1][1];
//
//	return result;
//}

Vector3 VectorTransform::Add(Vector3 v1, Vector3 v2) {
	Vector3 result = {};

	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	result.z = v1.z + v2.z;
	return result;
}

Vector3 VectorTransform::Subtract(Vector3 v1, Vector3 v2) {
	Vector3 result = {};

	result.x = v1.x - v2.x;
	result.y = v1.y - v2.y;
	result.z = v1.z - v2.z;
	return result;
}

Vector3 VectorTransform::Multiply(Vector3 v1, Vector3 v2) {
	Vector3 result = {};

	result.x = v1.x * v2.x;
	result.y = v1.y * v2.y;
	result.z = v1.z * v2.z;
	return result;
}

Vector3 VectorTransform::Divide(Vector3 v1, Vector3 v2) {
	Vector3 result = {};

	result.x = v1.x / v2.x;
	result.y = v1.y / v2.y;
	result.z = v1.z / v2.z;
	return result;
}
Vector3 VectorTransform::Transform(const Vector3& v, const Matrix4x4& matrix)
{  
	Vector3 result = {};
	result.x =
	    v.x * matrix.m[0][0] + v.y * matrix.m[1][0] + v.z * matrix.m[2][0] + 1.0f * matrix.m[3][0];
	result.y =
	    v.x * matrix.m[0][1] + v.y * matrix.m[1][1] + v.z * matrix.m[2][1] + 1.0f * matrix.m[3][1];
	result.z =
	    v.x * matrix.m[0][2] + v.y * matrix.m[1][2] + v.z * matrix.m[2][2] + 1.0f * matrix.m[3][2];
	float W =
	    v.x * matrix.m[0][3] + v.y * matrix.m[1][3] + v.z * matrix.m[2][3] + 1.0f * matrix.m[3][3];
	assert(W != 0.0f);
	result.x /= W;
	result.y /= W;
	result.z /= W;
	return result;


}


Vector3 VectorTransform::TransformNormal(const Vector3& v, const Matrix4x4& m) {

	Vector3 result{

	    v.x * m.m[0][0] + v.y * m.m[1][0] + v.z * m.m[2][0],
	    v.x * m.m[0][1] + v.y * m.m[1][1] + v.z * m.m[2][1],
	    v.x * m.m[0][2] + v.y * m.m[1][2] + v.z * m.m[2][2]};

	return result;
}


float VectorTransform::Dot(const Vector3& v1, const Vector3& v2) {
	float result;

	result = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
	return result;
}


float VectorTransform::Length(const Vector3& v) {
	float result;
	result = float(sqrt(Dot(v, v)));
	return result;
}
Vector3 VectorTransform::Normalize(const Vector3& v) 
{
	Vector3 result{};
	float length = Length(v);
	if (length != 0.0f) {
		result.x = v.x / length;
		result.y = v.y / length;
		result.z = v.z / length;
	}
	return result;
}
//
//Vector3 VectorTransform::Multiply(Vector3 v, Matrix3x3 matrix) {
//
//	Vector3 result;
//
//	result.x = v.x * matrix.m[0][0] + v.y * matrix.m[1][0] + v.z * matrix.m[2][0];
//	result.y = v.x * matrix.m[0][1] + v.y * matrix.m[1][1] + v.z * matrix.m[2][1];
//	result.z = v.x * matrix.m[0][2] + v.y * matrix.m[1][2] + v.z * matrix.m[2][2];
//
//	return result;
//}

Vector4 VectorTransform::Add(Vector4 v1, Vector4 v2) {
	Vector4 result = {};

	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	result.z = v1.z + v2.z;
	result.w = v1.w + v2.w;
	return result;
}

Vector4 VectorTransform::Subtract(Vector4 v1, Vector4 v2) {
	Vector4 result = {};

	result.x = v1.x - v2.x;
	result.y = v1.y - v2.y;
	result.z = v1.z - v2.z;
	result.w = v1.w - v2.w;
	return result;
}

Vector4 VectorTransform::Multiply(Vector4 v1, Vector4 v2) {
	Vector4 result = {};

	result.x = v1.x * v2.x;
	result.y = v1.y * v2.y;
	result.z = v1.z * v2.z;
	result.w = v1.w * v2.w;
	return result;
}

Vector4 VectorTransform::Divide(Vector4 v1, Vector4 v2) {
	Vector4 result = {};

	result.x = v1.x / v2.x;
	result.y = v1.y / v2.y;
	result.z = v1.z / v2.z;
	result.w = v1.w / v2.w;
	return result;
}

Vector4 VectorTransform::Multiply(Vector4 v, Matrix4x4 matrix) {
	Vector4 result = {};

	result.x = (v.x * matrix.m[0][0]) + (v.y * matrix.m[1][0]) + (v.z * matrix.m[2][0]) +
	           (1.0f * matrix.m[3][0]);

	result.y = (v.x * matrix.m[0][1]) + (v.y * matrix.m[1][1]) + (v.z * matrix.m[2][1]) +
	           (1.0f * matrix.m[3][1]);

	result.z = (v.x * matrix.m[0][2]) + (v.y * matrix.m[1][2]) + (v.z * matrix.m[2][2]) +
	           (1.0f * matrix.m[3][2]);

	float w = (v.x * matrix.m[0][3]) + (v.y * matrix.m[1][3]) + (v.z * matrix.m[2][3]) +
	          (1.0f * matrix.m[3][3]);

	assert(w != 0.0f);
	result.x /= w;
	result.y /= w;
	result.z /= w;

	return result;
}

Vector4 VectorTransform::Identity4x4() {
	Vector4 result = {};

	result.x = 1.0f;
	result.y = 1.0f;
	result.z = 1.0f;
	result.w = 1.0f;

	return result;
}


