#include<iostream>
using namespace std;
const int Max=5;
void show_array(const double[],double*);
void revalue(double,double[],double*);
double *fill_array(double[],int);
int main()
{
	double properties[Max];
	double *p=fill_array(properties,Max);
	show_array(properties,p);
	if(p!=&properties[0])
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while(!(cin>>factor))
		{
			cin.clear();
			while(cin.get()!='\n')
			continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor,properties,p);
		show_array(properties,p);
	}
	cout << "Done.\n";
	return 0;
}
double *fill_array(double ar[],int n)
{
	double temp;
	int i;
	for(i=0;i<n;i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin>>temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get()!='\n')
			continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if(temp<0)
		break;
		ar[i]=temp;
	}
	double *pt=&ar[i-1];
	return pt;
}
void show_array(const double ar[],double*ps)
{
	const double*p=&ar[0];
	for(int i=0;p!=ps+1;p++,i++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout<<ar[i]<<endl;
	}
}
void revalue(double r,double ar[],double*ps)
{
	double *p=&ar[0];
	for(int i=0;p!=ps+1;p++,i++)
	    ar[i]*=r;
}