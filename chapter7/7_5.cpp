#include<iostream>
long long int recure(int);
int main()
{
	using namespace std;
	int number;
	cout<<"Enter a integer(q to stop):";
	while(cin>>number)
	{
		long long int result=recure(number);
		cout<<number<<"! = "<<result<<endl;
		cout<<"Next:";
	}
	cout<<"Done!"<<endl;
	return 0;
}
long long int recure(int n)
{
	long long int result;
	if(n>0)
	result=n*recure(n-1);
	else
	result=1;
	return result;
}