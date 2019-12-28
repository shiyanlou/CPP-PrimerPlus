//winec-new.cpp
#include"winec-new.h"
Wine:: Wine(const char *l,int y,const int yr[],const int bot[]): string (l),yrs(y),PairArray(ArrayInt (yr,y),ArrayInt (bot,y))
{
}
Wine:: Wine(const char *l,int y): string (l),yrs(y)
{
}
void Wine:: GetBottles()
{
	ArrayInt yr(yrs),bt(yrs);
	for(int i=0;i<yrs;i++)
	{
		cout<<"Enter the year: ";
		cin>>yr[i];
		cout<<"Enter the bottles: ";
		cin>>bt[i];
	}
	while(cin.get()!='\n')
	continue;
	PairArray:: Set(yr,bt);
}
string &Wine:: Label()
{
	return (string &)(*this);
}
void Wine:: Show()const 
{
	cout<<"Wine: "<<(string &)(*this)<<endl;
	cout<<"\tYear\tBottles\n";
	PairArray:: Show(yrs);
}
int Wine:: sum()const 
{
	return PairArray:: Sum();
}