//11_7_class.cpp
#include"complex0.h"
Complex ::Complex ()
{
	real=0.0;
	imaginary=0.0;
}
Complex ::Complex (double n1)
{
	real=n1;
	imaginary=0.0;
}
Complex ::Complex (double n1,double n2)
{
	real=n1;
	imaginary=n2;
}
Complex ::~Complex ()
{
}
Complex Complex ::operator +(const Complex &c)const 
{
	return Complex (real+c.real,imaginary+c.imaginary);
}
Complex Complex ::operator -(const Complex &c)const 
{
	return Complex (real-c.real,imaginary-c.imaginary);
}
Complex Complex ::operator *(const Complex &c)const 
{
	double real_s;
	double imaginary_s;
	real_s=real*c.real-imaginary*c.imaginary;
	imaginary_s=real*c.imaginary+imaginary*c.real;
	return Complex (real_s,imaginary_s);
}
Complex Complex ::operator *(double n)const 
{
	return Complex (n*real,n*imaginary);
}
Complex Complex ::operator ~()const 
{
	return Complex (real,-imaginary);
}
Complex operator *(double n,const Complex &c)
{
	return Complex (n*c.real,n*c.imaginary);
}
ostream&operator <<(ostream&os,const Complex &c)
{
	os<<"("<<c.real<<","<<c.imaginary<<"i)";
	return os;
}
istream&operator >>(istream&is,Complex &c)
{
	cout<<"Real:";
	if(is>>c.real)
	{
		cout<<"Imaginary:";
		is>>c.imaginary;
	}
   
	return is;
}