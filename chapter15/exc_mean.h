//exc_mean.h
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
	explicit bad_hmean (const string &n="hmean",const string &s="Errorinhmean()\n");
	string mesg();
	virtual ~bad_hmean ()throw(){}
};
bad_hmean :: bad_hmean (const string &n,const string &s):name(n),logic_error(s)
{
}
inline string bad_hmean :: mesg()
{
	return "hmean()argumentsa=-bshouldbediva+b=0!\n";
}
class bad_gmean :public logic_error
{
	private :
	string name;
	public :
	explicit bad_gmean (const string &n="gmean",const string &s="Erroringmean()\n");
	string mesg();
	virtual ~bad_gmean ()throw(){}
};
bad_gmean :: bad_gmean (const string &n,const string &s):name(n),logic_error(s)
{
}
inline string bad_gmean :: mesg()
{
	return "gmean()argumentsshouldbe>=0\n";
}
#endif