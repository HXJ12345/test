#ifndef _TEST1_H_
#define _TEST1_H_
#include <iostream>
template <class T>//类模板声明
class Complex{
public:
	Complex(T ix=0, T iy=0):ireal(ix),iimaginary(iy)//用成员初始化列表初始化数据成员
	{
		//ireal = ix;
		//iimaginary = iy;
		//cout<<this<<"  Constructor are called."<<endl;
	}
	Complex(const Complex<T>& a);//拷贝构造函数
	~Complex()//析构函数
	{
		//cout<<this<<"  Destructor are called."<<endl;
	}
	void Display();
	Complex operator+(const Complex<T>& a)//运算符重载函数作为类成员函数，其中一个量为从其本身
	{
		Complex<T> temp;
	    temp.ireal = a.ireal + ireal;
		temp.iimaginary = a.iimaginary + iimaginary;
		return temp;//返回时还会进入一次析构函数，不知为何
	}
	template <class T> friend Complex<T> operator-(const Complex<T>& a, const Complex<T>& b);//友元运算符-重载函数
	template <class T> friend ostream& operator<< (ostream& out, const Complex<T>& a);//友元运算符<<重载函数
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