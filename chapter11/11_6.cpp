//11_6.cpp
#include"11_6_class.h"
int main()
{
	Stonewt sw[6]={10.0,11.0,12.5,23.3,11.9,19.1};
	Stonewt temp(11.0);
	for(int i=0;i<6;i++)
	cout<<"#"<<i<<":"<<sw[i];
	int count=0;
	Stonewt Min=sw[0];
	Stonewt Max=sw[0];
	for(int i=0;i<6;i++)
	{
		if(Min>sw[i])
		Min=sw[i];
		if(Max<sw[i])
		Max=sw[i];
		if(temp>=sw[i])
		count++;
	}
	cout<<"The Min pounds:"<<Min;
	cout<<"The Max pounds:"<<Max;
	cout<<"The numbers under 11 pounds:"<<count;
	return 0;
}