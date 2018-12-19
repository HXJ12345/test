#include <iostream>
using namespace std;
#include "test1.h"

int main()
{
	//Complex<int> A(2,2);
	//Complex<int> B(A),C,D;
	//Complex<int> B=A;这也是调用的拷贝构造函数
	//Complex<int> B(A)调用的才是拷贝构造函数,B=A调用的是赋值运算符函数
	//Complex<double> M(1.25,5.2544);
	//C = A + B;//相当于 C = A.operator+(B); = 调用的是赋值运算符重载
	//A.Display();
	/*D = C-A;
	A.Display();
	B.Display();
	cout<<C<<endl;
	cout<<D<<endl;	
	cout<<M<<endl;*/
	unsigned short a=40000;
	short b= (short)a;
	cout<<a<<"   "<<b<<endl;   



}