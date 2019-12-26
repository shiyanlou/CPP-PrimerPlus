#include<iostream>
#include<fstream>
#include<cstdlib>
struct member
{
	char name[20];
	double donation;
};
int main()
{
	using namespace std;
	int num,count1=0,count2=0;
	ifstream fin;
	fin.open("donators.txt");
	if(!fin.is_open())
	{
		cout<<"Could not open the file."<<endl;
		cout<<"Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	fin>>num;
	fin.get();
	member*pd=new member[num];
	for(int i=0;i<num;i++)
	{
		fin.getline(pd[i].name,20);
		fin>>pd[i].donation;
		fin.get();
	}
	cout<<"Grand Patrons:\n";
	for(int i=0;i<num;i++)
	if(pd[i].donation>=10000)
	{
		cout<<pd[i].name<<"\n"<<pd[i].donation<<endl;
		count1++;
	}
	if(count1==0)
		cout<<"none\n";
	cout<<"Patrons:\n";
	for(int i=0;i<num;i++)
		if(pd[i].donation<10000)
		{
			cout<<pd[i].name<<"\n"<<pd[i].donation<<endl;
			count2++;
		}
	if(count2==0)
		cout<<"none\n";
	delete []pd;
	return 0;
}