//exc_mean-new.h
#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_
#include<iostream>
#include<cmath>
#include<stdexcept>
#include<string>
using namespace std;
class bad_hmean :public logic_error
{
	private :
	string name;
	public :
	double v1;
	double v2;
	explicit bad_hmean (double a=0,double b=0,
	const string &s="Errorinhmean()\n");
	void mesg();
	virtual ~bad_hmean ()throw (){}
};
bad_hmean :: bad_hmean (double a,double b,const string &s)
:v1(a),v2(b),logic_error(s)
{
	name="hmean";
}
inline void bad_hmean :: mesg()
{
	cout<<name<<"("<<v1<<","<<v2
	<<")argumentsa=-bshouldbediva+b=0!\n";
}
class bad_gmean :public bad_hmean 
{
	private :
	string name;
	public :
	explicit bad_gmean (double a=0,double b=0,
	const string &s="Erroringmean()\n");
	void mesg();
	virtual ~bad_gmean ()throw (){}
};
bad_gmean :: bad_gmean (double a,double b,const string &s)
:bad_hmean (a,b,s)
{
	name="gmean";
}
inline void bad_gmean :: mesg()
{
	cout<<name<<"("<<bad_hmean :: v1<<","<<bad_hmean :: v2<<")arguments should be>=0\n";
}
#endif
