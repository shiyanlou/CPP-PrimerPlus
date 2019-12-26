#include<iostream>
#include<string>
double calculate(double x,double y,double(*pf)(double,double));
double add(double x,double y);
double sub(double x,double y);
double mean(double x,double y);
int main()
{
	using namespace std;
	double a,b;
	double (*pf[3])(double,double)={add,sub,mean};
	string op[3]={"add","sub","mean"};
	cout<<"Enter pairs of numbers(q to quit):";
	while(cin>>a>>b)
	{
		for( int i=0;i<3;i++)
		{
			cout<<op[i]<<": "<<a<<" and "<<b<<" = "
			<<calculate(a,b,pf[i])<<endl;
		}
	}
}
double calculate(double x,double y,double(*pf)(double,double))
{
	return (*pf)(x,y);
}
double add(double x,double y)
{
	return x+y;
}
double sub(double x,double y)
{
	return x-y;
}
double mean(double x,double y)
{
	return (x+y)/2.0;
}