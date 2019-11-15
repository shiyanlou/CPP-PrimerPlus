#include<iostream>
#include<string>
using namespace std;
struct patron{
	stringname;
	double money;
};
int main()
{
	int num,temp=0;
	cout<<"请输入捐款的人数：";
	cin>>num;
	cin.get();
	patron*ps=newpatron[num];
	for(inti=0;i<num;++i)
	{
		cout<<"请输入第"<<i+1<<"位捐款人的名字：";
		getline(cin,ps[i].name);
		cout<<"请输入第"<<i+1<<"位捐款人捐款的数目：";
		cin>>ps[i].money;
		cin.get();
	}
	cout<<"GrandPatrons:\n";
	for(inti=0;i<num;++i)
	if(ps[i].money>10000)
	{
		cout<<ps[i].name<<"\n"<<ps[i].money<<endl;
		++temp;
	}
	if(temp==0)
	cout<<"none\n";
	cout<<"Patrons:\n";
	for(inti=0;i<num;++i)
	if(ps[i].money<=10000)
	{
		cout<<ps[i].name<<"\n"<<ps[i].money<<endl;
		++temp;
	}
	if(temp==0)
	cout<<"none\n";
	delete[]ps;
	return 0;
}