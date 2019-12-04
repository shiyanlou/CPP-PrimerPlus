#include<iostream>
#include<cstring>
#include"person.h"
Person::Person(const std::string&ln,const char*fn)
{
	lname=ln;
	strcpy(fname,fn);
}
void Person::Show()const
{
	using std:: cout;
	using std:: endl;
	cout<<"The people's name is "<<fname<<" "<<lname<<endl;
}
void Person::FormalShow()const
{
	using std:: cout;
	using std:: endl;
	cout<<"The people's name is "<<lname<<","<<fname<<endl;
}