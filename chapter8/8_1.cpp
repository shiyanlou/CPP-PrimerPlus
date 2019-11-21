#include<iostream>
void show(const char*ps,int n=0);
int count = 0;
using namespace std;
int main()
{
	char pstr[]="Hello\n";
	show(pstr);
	int num;
	cout<<"Enter a number:";
	cin>>num;
	show(pstr,num);
	cout<<"Done\n";
	return 0;
}
void show(const char*ps,int n)
{
	count ++;

	int lim=n;
	if(n==0)
		lim=1;
	else
	{
		lim = count;
	}

	for( int i=0;i<lim;i++)
		cout<<ps;
}