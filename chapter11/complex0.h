//11_7_class.h
#ifndef __11_7_CLASS__
#define __11_7_CLASS__
#include<iostream>
#include<string>
#include<stdio.h>
#include<cmath>
using namespace std;
class Complex 
{
private:
	double real;
	double imaginary;
public:
	Complex ();
	Complex (double n1);
	Complex (double n1,double n2);
	~Complex ();
	Complex operator +(const Complex &c)const ;
	Complex operator -(const Complex &c)const ;
	Complex operator *(const Complex &c)const ;
	Complex operator *(double n)const ;
	Complex operator ~()const ;
	friend Complex operator *(double n,const Complex &c);
	friend ostream&operator <<(ostream&os,const Complex &c);
	friend istream&operator >>(istream&is,Complex &c);
};
#endif