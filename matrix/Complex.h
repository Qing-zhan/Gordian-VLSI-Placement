//���帴���� COMPLEX_H
#ifndef COMPLEX_H  //�����ظ�����ͷ�ļ�
#define COMPLEX_H
using namespace std;

class Complex
{
	friend ostream &operator<<(ostream &,const Complex &);
   friend istream &operator>>(istream &,Complex &);        //���븴��ʱ���ԡ�,���������ԡ�;��������
public:
    Complex(double r=0,double i=0);
	void setRe(double r);//�趨ʵ��
	void setIm(double i);//�趨�鲿
	double getRe() const;//�õ�ʵ��
	double getIm() const;//�õ��鲿
	double getABS() const;//�õ�������ģ
	void show() const;//��ʾ����
	const Complex &operator=(const Complex &);//��ֵ
	Complex con() const;//ȡ����
	Complex operator+(Complex &z);//��
	Complex operator-(Complex &z);//��
	Complex operator*(Complex &z);//��
	Complex operator/(Complex &z);//��
	operator double();
	int operator==(const Complex &z) const;//�ж����
	int operator!=(const Complex &z) const;//�жϲ���

private:
	double Re;
	double Im;
};
#endif