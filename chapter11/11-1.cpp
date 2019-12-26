#include"11_1_class.h"
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
	ofstream fout;
	fout.open("savesteps.txt");
	cout<<"Enter target distance(q to quit):";
	while(cin>>target)
	{
		cout<<"Enter step length:";
		if(!(cin>>dstep))
		break;
		fout<<"Target Distance: "<<target<<" Step Size:"<<dstep<<endl;
		while(result.magval()<target)
		{
			fout<<steps<<":"<<result<<endl;
			direction=rand()%360;
			step.reset(dstep,direction,Vector::POL);
			result=result+step;
			steps++;
		}
		cout<<"After"<<steps<<"steps,the subject has the following location:\n";
		cout<<result<<endl;
		fout<<"After"<<steps<<"steps,the subject has the following location:\n";
		fout<<result<<endl;
		result.polar_mode();
		cout<<"or\n"<<result<<endl;
		cout<<"Average outward distance per step= "
		<<result.magval()/steps<<endl;
		fout<<"or\n"<<result<<endl;
		fout<<"Average outward distance per step= "
		<<result.magval()/steps<<endl;
		steps=0;
		result.reset(0.0,0.0);
		cout<<"Enter target distance(q to quit):";
	}
	cout<<"Bye!\n";
	cin.clear();
	while(cin.get()!='\n')
	continue;
	cin.get();
	return 0;
}