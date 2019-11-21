#include<iostream>
#include<cstring>
#include"golf.h"
using namespace std;
int setgolf(golf&g)
{
	cout<<"Enter the golfer's name:\n";
	cin.get(g.fullname,Len);
	if(g.fullname[0]=='\0')
	return 0;
	cout<<"Enter the handicap for "<<g.fullname<<endl;
	while(!(cin>>g.handicap))
	{
		cin.clear();
		while(cin.get()!='\n')
		continue;
		cout<<"Please enter an integer.\n";
	}
	cin.get();
	return 1;
}
void setgolf(golf&g,const char*name,int hc)
{
	strncpy(g.fullname,name,Len);
	g.handicap=hc;
}
void handicap(golf&g,int hc)
{
	g.handicap=hc;
}
void showgolf(const golf&g)
{
	cout<<"Golfer:"<<g.fullname<<"\n";
	cout<<"Handicap:"<<g.handicap<<"\n\n";
}