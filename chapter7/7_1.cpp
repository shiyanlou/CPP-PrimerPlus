#include<iostream>
double t_hm(double x,double y);
int main()
{
	using namespace std;
	double x,y;
	double result;
	cout<<"Please enter two numbers(0 to stop):";
	while((cin>>x>>y)&&x!=0&&y!=0)
	{
		result=t_hm(x,y);
		cout<<"Harmonic mean = "<<result<<endl;
		cout<<"Please enter two numbers(0 to stop):";
	}
	cout<<endl;
	return 0;
}
double t_hm(double x,double y)
{
	return 2.0*x*y/(x+y);
}