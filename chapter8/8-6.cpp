#include<iostream>
#include<cstring>
template<typename T>
T maxn(T ar[],int n);
template<>const char*maxn(const char*ar[],int n);
int main()
{
	using namespace std;
	int ari[6]={1,2,3,4,6,5};
	double ard[4]={1.1,2.2,4.4,3.3};
	const char *ars[5]={
		"a",
		"bb",
		"ccc",
		"ddddd",
		"eeee"
	};
	cout<<"The max integer of array is:"<<maxn(ari,6)<<endl;
	cout<<"The max double of array is:"<<maxn(ard,4)<<endl;
	cout<<"The max string of array is:"<<maxn(ars,5)<<endl;
}
template<typename T>
T maxn(T ar[],int n)
{
	T maxar=ar[0];
	for( int i=1;i<n;i++)
	{
		if(maxar<ar[i])
			maxar=ar[i];
	}
	return maxar;
}
template<>const char*maxn(const char*ar[],int n)
{
	const char *maxs=ar[0];
	for( int i=1;i<n;i++)
	{
		if(strlen(maxs)<strlen(ar[i]))
		maxs=ar[i];
	}
	return maxs;
}