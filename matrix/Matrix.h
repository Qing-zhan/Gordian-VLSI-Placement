
#ifndef MATRIX_H
#define MATRIX_H

#include "Complex.h"
#include <iostream>
using namespace std;

class Matrix
{
	friend ostream &operator<<(ostream &,const Matrix &);
	friend istream &operator>>(istream &,Matrix &);
	friend Matrix diag(Matrix &);
	friend Matrix con(Matrix &);
public:
	Matrix(int r=0,int c=0);
	Matrix(const Matrix &M);
	~Matrix();
	int getRow() const;
	int getCol() const;
	int getsize() const;
	Complex &operator()(int i,int j);
	const Matrix &operator=(const Matrix &);
	Matrix operator==(const Matrix &) const;
	Matrix operator!=(const Matrix &) const;
	Matrix operator~();//����ת��
	Matrix addTransfer(Matrix &, Matrix &);//add and transfer
	Matrix operator+(Matrix &);//����Ԫ�����
	Matrix operator-(Matrix &);//����Ԫ�����
	Matrix operator*(Matrix &);//����Ԫ�����
	Matrix operator/(Matrix &);//����Ԫ�����
	Matrix operator&(Matrix &);//����˷�	
	Matrix operator|(Matrix &);//������˷�
	Matrix addIdentity(Matrix &, int, int, int);
	Matrix addBlock(Matrix &, Matrix &, int, int, int, int);
	Matrix amplify(Matrix &, int);
	Matrix reverse(Matrix &);
	Matrix getBlock(Matrix &, Matrix &, int, int, int, int);
	Matrix reverseGauss(Matrix &);
	Matrix conversionMatrix(Matrix &, int []);
	Matrix conversionVector(Matrix &, int []);
	Matrix conversionVectorback(Matrix &, int []);

	static int getMatrixCount();
private:
	Complex *ptr;
	int Row;
	int Col;
	int size;
	static int MatrixCount;	
};
#endif




