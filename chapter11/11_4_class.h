//11_4_class.h
#ifndef __11_4_CLASS__
#define __11_4_CLASS__
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class Time
{
	private:
	int hours;
	int minutes;
	public:
	Time();
	Time(int h,int m=0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h=0,int m=0);
	Time operator *(double n)const ;
	friend Time operator -(const Time&t1,const Time&t2);
	friend Time operator +(const Time&t1,const Time&t2);
	friend Time operator *(double m,const Time&t)
	{
		return t*m;
	}
	friend ostream&operator <<(ostream&os,const Time&t);
};
#endif