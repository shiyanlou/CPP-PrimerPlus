#include<iostream>
template<typename T>
T SumArrray(T arr[],int n);
template<typename T>
T SumArrray(T*arr[],int n);
struct debts
{
	char name[50];
	double amount;
};
int main()
{
	using namespace std;
	int things[6]={13,31,103,301,310,130};
	struct debts mr_E[3]={
		{"Ima Wolfe",2400.0},
		{"Ura Foxe",1300.0},
		{"Iby Stout",1800.0}
	};
	double *pd[3];
	for( int i=0;i<3;i++)
	pd[i]=&mr_E[i].amount;
	cout<<"Sum: Mr.E's counts of things: "
	<<SumArrray(things,6)<<endl;
	cout<<"Sum: Mr.E's debts: "
	<<SumArrray(pd,3)<<endl;
	return 0;
}
template<typename T>
T SumArrray(T arr[],int n)
{
	using namespace std;
	T sum=0;
	cout<<"templateA\n";
	for( int i=0;i<n;i++)
	    sum+=arr[i];
	return sum;
}
template<typename T>
T SumArrray(T*arr[],int n)
{
	using namespace std;
	T sum=0;
	cout<<"templateB\n";
	for( int i=0;i<n;i++)
	    sum+=*arr[i];
	return sum;
}