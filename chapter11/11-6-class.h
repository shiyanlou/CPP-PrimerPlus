//11_6_class.h
#ifndef __11_6_CLASS__
#define __11_6_CLASS__
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
class Stonewt 
{
	private:
	enum {Lbs_per_stn=14};
	int stone;
	double pds_left;
	double pounds;
	public:
	Stonewt (double lbs);
	Stonewt (int stn,double lbs);
	Stonewt ();
	~Stonewt ();
	bool operator <(const Stonewt &st)const ;
	bool operator <=(const Stonewt &st)const ;
	bool operator >(const Stonewt &st)const ;
	bool operator >=(const Stonewt &st)const ;
	bool operator ==(const Stonewt &st)const ;
	bool operator !=(const Stonewt &st)const ;
	friend ostream&operator <<(ostream&os,const Stonewt &st);
};
#endif