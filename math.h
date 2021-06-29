#pragma once

// 数学库，部分参考网络

struct Vector {
	float x, y, z, w; //齐次坐标
};

struct Matrix
{
	float m[4][4];
};

// length 向量长度
float VectorLength(Vector v);

// add 向量加
void VectorAdd(Vector& v, const Vector& x, const Vector& y);

// sub 向量减
void VectorSub(Vector& v, const Vector& x, const Vector& y);

// dot product 数量积
float VectorDotProduct(const Vector& x, const Vector& y);

// cross product 向量积
void VectorCrossProduct(Vector& v, const Vector& x, const Vector& y);

// normalize 归一化
void VectorNormalize(Vector& v);

// interpolation 插值
void VectorInterp(Vector& v, const Vector& x, const Vector& y, float t);


// matrix identity 归为单位阵
void MatrixSetIdentity(Matrix& m);

// matrix zero 归为零阵
void MatrixSetZero(Matrix& m);

// matrix m = a + b 矩阵加
void MatrixAdd(Matrix& m, const Matrix& a, const Matrix& b);

// matrix m = a - b 矩阵减
void MatrixSub(Matrix& m, const Matrix& a, const Matrix& b);

// matrix m = a * b 矩阵乘
void MatrixMul(Matrix& m, const Matrix& a, const Matrix& b);

// matrix m = a * f
void MatrixScale(Matrix& m, const Matrix& a, const float f);

// matrix v = x * m
void MatrixApply(Vector& v, const Vector& x, const Matrix& m);

// translate 平移
void MatrixSetTranslate(Matrix& m, float x, float y, float z);

// scale 缩放
void MatrixSetScale(Matrix& m, float x, float y, float z);

// rotate 旋转
void MatrixSetRotate(Matrix& m, float x, float y, float z, float theta);

// lookat 摄像机方向
void MatrixSetLookAt(Matrix& m, const Vector& eye, const Vector& at, const Vector& up);

// perspective 投影
void MatrixSetPerspective(Matrix& m, float fovy, float aspect, float zn, float fn);
