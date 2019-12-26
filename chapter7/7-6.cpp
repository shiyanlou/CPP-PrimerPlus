#include<iostream>
#include<cstring>
const int Size=10;
int Fill_array(double ar[],int n);
void Show_array(const double ar[],int n);
void Reverse_array(double ar[],int n);
int main()
{
	using namespace std;
	double values[Size],values_bak[Size];
	int len=Fill_array(values,Size);
	cout<<"Array values:\n";
	Show_array(values,len);
    memcpy(values_bak,values,Size*sizeof(double));
	cout<<"Array reversed:\n";
	Reverse_array(values_bak,len);
	Show_array(values_bak,len);
    memcpy(values_bak,values,Size*sizeof(double));
	cout<<"All but end values reversed:\n";
	Reverse_array(values_bak+1,len-2);
	Show_array(values_bak,len);
	return 0;
}
int Fill_array(double ar[],int n)
{
	using namespace std;
	double temp;
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"Enter value # "<<i+1<<":";
		cin>>temp;
		if(!cin)
		break;
		ar[i]=temp;
	}
	cout<<endl;
	return i;
}
void Show_array(const double ar[],int n)
{
	using namespace std;
	for(int i=0;i<n;i++)
	cout<<"Property # "<<i+1<<":"
	<<ar[i]<<endl;
	cout<<endl;
}
void Reverse_array(double ar[],int n)
{
	double temp;
	for(int i=0,j=n-1;i<j;i++,j--)
	{
		temp=ar[i];
		ar[i]=ar[j];
		ar[j]=temp;
	}
}