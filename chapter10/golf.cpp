// filename golf.cpp
#include<iostream>
#include<cstring>
#include"golf.h"
Golf::Golf()
{
	strcpy(fullname,"NoName");
	handicap=0;
}
Golf::Golf(const char*name,int hc)
{
	strcpy(fullname,name);
	handicap=hc;
}
const Golf&Golf::setgolf(const Golf&g)
{
	strcpy(fullname,g.fullname);
	handicap=g.handicap;
	return *this;
}
void Golf::showgolf()const
{
	std:: cout<<"Golfer:"<<fullname<<"\n";
	std:: cout<<"Handicap:"<<handicap<<"\n\n";
}