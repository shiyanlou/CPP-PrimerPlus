#include<iostream>
const int Num=5;
template<typename T>
T max5(T[]);
using namespace std;
int main()
{
	int a[Num]={1,2,3,4,5};
	double b[Num]={1.1,2.2,3.3,4.4,5.5};
	int maxi=max5(a);
	double maxd=max5(b);
	cout<<"maxina[5]:"<<maxi<<endl
	<<"maxinb[5]:"<<maxd<<endl;
	return 0;
}
template<typename T>
T max5(T ar[])
{
	T max=ar[0];
	for( int i=0;i<5;i++)
	{
		if(max<ar[i])
		max=ar[i];
	}
	return max;
}