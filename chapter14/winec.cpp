//winec.cpp
#include"winec.h"
Wine:: Wine(const char *l,int y,const int yr[],const int bot[])
{
	fullname=l;
	yrs=y;
	yb.Set(ArrayInt(yr,yrs),ArrayInt(bot,yrs));
}
Wine:: Wine(const char *l,int y)
{
	fullname=l;
	yrs=y;
}
void Wine:: GetBottles()
{
	ArrayInt yr(yrs),bt(yrs);
	for(int i=0;i<yrs;i++)
	{
		cout<<"Entertheyear: ";
		cin>>yr[i];
		cout<<"Enterthebottles: ";
		cin>>bt[i];
	}
	while(cin.get()!='\n')
	continue;
	yb.Set(yr,bt);
}
string &Wine:: Label()
{
	return fullname;
}
void Wine:: Show()const 
{
	cout<<"Wine: "<<fullname<<endl;
	cout<<"\tYear\tBottles\n";
	yb.Show(yrs);
}

int Wine:: sum()const 
{
	return yb.Sum();
}