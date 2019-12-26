// 11_3.cpp
#include"11_3_class.h"
int main()
{
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0,0.0);
	unsigned long steps=0;
	double target;
	double dstep;
	double numbers,N;
	double Min,Max,Sum,Average;
	cout<<"Enter target distance:";
	cin>>target;
	cout<<"Enter step length:";
	cin>>dstep;
	cout<<"Enter test numbers:";
	cin>>numbers;
	N=numbers;
	Min=Max=Sum=Average=0.0;
	while(numbers)
	{
		while(result.magval()<target)
		{
			direction=rand()%360;
			step.reset(dstep,direction,Vector::POL);
			result=result+step;
			steps++;
		}
		cout<<"After"<<steps<<"steps once a walk\n";
		if(Min==0||Max==0)
		Min=Max=steps;
		if(Min>steps)
		Min=steps;
		if(Max<steps)
		Max=steps;
		Sum+=steps;
		numbers--;
		steps=0;
		result.reset(0.0,0.0);
	}
	Average=Sum/N;
	cout<<"Max steps is"<<Max<<endl;
	cout<<"Min steps is"<<Min<<endl;
	cout<<"Average steps is"<<Average<<endl;
	cout<<"Bye!\n";
	cin.clear();
	return 0;
}