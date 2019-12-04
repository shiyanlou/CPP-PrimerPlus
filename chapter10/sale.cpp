//sale.cpp
#include<iostream>
#include"sale.h"
namespace  SALES
{
	using  std:: cout;
	using  std:: cin;
	using  std:: endl;
	static  double calaverage(double arr[],unsigned arrSize)
	{
			double sum=0;
			for( int i=0;i<arrSize;i++)
			sum+=arr[i];
			return sum/arrSize;
	}
	static  double calmax(double arr[],unsigned arrSize)
	{
			double max=arr[0];
			for( int i=1;i<arrSize;i++)
			{
					if(max<arr[i])
					max=arr[i];
			}
			return max;
	}
	static  double calmin(double arr[],unsigned arrSize)
	{
			double min=arr[0];
			for( int i=1;i<arrSize;i++)
			{
					if(min>arr[i])
					min=arr[i];
			}
			return min;
	}
	Sales::Sales()
	{
			min=0;
			max=0;
			average=0;
			for( int i=0;i<QUARTERS;i++)
			sales[i]=0;
	}
	Sales::Sales(const double ar[],int n)
	{
			unsigned times=n<QUARTERS?(unsigned)n:QUARTERS;
			for( int i=0;i<times;i++)
			sales[i]=ar[i];
			for( int i=times;i<QUARTERS;i++)
			sales[i]=0;
			average=calaverage(sales,times);
			max=calmax(sales,times);
			min=calmin(sales,times);
	}
	void  Sales::setSales()
	{
			cout<<"Enter 4 sales:\n";
			for( int i=0;i<QUARTERS;i++)
			{
					cout<<"sales "<<i+1<<":";
					cin>>sales[i];
			}*
			this=Sales(sales,QUARTERS);
	}
	void  Sales::showSales()const
	{
			cout<<"sales: ";
			for( int i=0;i<QUARTERS;i++)
			cout<<sales[i]<<" ";
			cout<<endl;
			cout<<"average: "<<average<<endl;
			cout<<"max: "<<max<<endl;
			cout<<"min: "<<min<<endl;
	}
}