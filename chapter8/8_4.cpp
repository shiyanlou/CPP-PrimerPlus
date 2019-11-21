#include<iostream>
using namespace std;
#include<cstring>
struct stringy{
	char *str;
	int ct;
};
void set(stringy&,char[]);
void show(const stringy&,int n=1);
void show(const char[],int n=1);
int main()
{
	stringy beany;
	char testing[]="Reality isn't what it used to be.";
	set(beany,testing);
	show(beany);
	show(beany,2);
	testing[0]='D';
	testing[1]='u';
	show(testing);
	show(testing,3);
	show("Done!");
	return 0;
}
void set(stringy&a,char b[])
{
	a.str=b;
}
void show(const stringy&x,int n)
{
	for( int i=n;i>0;i--)
	cout<<x.str<<endl;
}
void show(const char a[],int n)
{
	for( int i=n;i>0;i--)
	cout<<a<<endl;
}
