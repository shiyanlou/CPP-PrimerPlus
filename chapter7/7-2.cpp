#include<iostream>
const int MAX=10;
using namespace std;
int fill_ar(double ar[],int limit);
void show_ar(const double ar[],int n);
double average(const double ar[],int n);
int main()
{
	double scores[MAX];
	int size=fill_ar(scores,MAX);
	show_ar(scores,size);
	if(size>0)
	    cout<<"The average of scores is:" <<average(scores,size)<<endl;
	return 0;
}
int fill_ar(double ar[],int limit)
{
	double temp;
	int i;
	for(i=0;i<limit;i++)
	{
		cout<<"Enter score# "<<i+1<<":";
		cin>>temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get()!='\n')
			    continue;
			cout<<"Bad input;enter a number:";
			break;
		}
		if(temp<0)
		    break;
		ar[i]=temp;
	}
	return i;
}
void show_ar(const double ar[],int n)
{
	for(int i=0;i<n;i++)
	    cout<<"score# "<<i+1<<":"<<ar[i]<<endl;
}
double average(const double ar[],int n)
{
	double sum=0.0;
	for(int i=0;i<n;i++)
	    sum+=ar[i];
	return sum/n;
}