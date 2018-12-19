#ifndef _TEST1_H_
#define _TEST1_H_
#include <iostream>
template <class T>//��ģ������
class Complex{
public:
	Complex(T ix=0, T iy=0):ireal(ix),iimaginary(iy)//�ó�Ա��ʼ���б��ʼ�����ݳ�Ա
	{
		//ireal = ix;
		//iimaginary = iy;
		//cout<<this<<"  Constructor are called."<<endl;
	}
	Complex(const Complex<T>& a);//�������캯��
	~Complex()//��������
	{
		//cout<<this<<"  Destructor are called."<<endl;
	}
	void Display();
	Complex operator+(const Complex<T>& a)//��������غ�����Ϊ���Ա����������һ����Ϊ���䱾��
	{
		Complex<T> temp;
	    temp.ireal = a.ireal + ireal;
		temp.iimaginary = a.iimaginary + iimaginary;
		return temp;//����ʱ�������һ��������������֪Ϊ��
	}
	template <class T> friend Complex<T> operator-(const Complex<T>& a, const Complex<T>& b);//��Ԫ�����-���غ���
	template <class T> friend ostream& operator<< (ostream& out, const Complex<T>& a);//��Ԫ�����<<���غ���
private:
	T ireal;
	T iimaginary;
};
template <class T>
Complex<T>::Complex(const Complex<T>& a)
{
	ireal = a.ireal;
	iimaginary = a.iimaginary;
}
template <class T>
void Complex<T>::Display()
{
	cout<<ireal<<'+'<<iimaginary<<'i'<<endl;
}
template <class T>
Complex<T> operator-(const Complex<T>& a, const Complex<T>& b)
{
	Complex<T> temp;
	temp.ireal = a.ireal - b.ireal;
	temp.iimaginary = a.iimaginary - b.iimaginary;
	return temp;
}
template <class T>
ostream& operator<< (ostream& out, const Complex<T>& a)
{
	out<<a.ireal<<'+'<<a.iimaginary<<'i';
	return out;
}

#endif