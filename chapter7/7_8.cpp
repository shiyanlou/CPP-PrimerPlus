#include<iostream>
const int Seasons=4;
struct data
{
	double arr[Seasons];
};
const char*Snames[]={"Spring","Summer","Fall","Winter"};
void fill(data*pd);
void show(data*pd);
int main()
{
	using namespace std;
	data expenses;
	fill(&expenses);
	show(&expenses);
	return 0;
}
void fill(data*pd)
{
	using namespace std;
	for(int i=0;i<Seasons;i++)
	{
		cout<<"Enter "<<Snames[i]<<" expenses:";
		cin>>pd->arr[i];
	}
}
void show(data*pd)
{
	using namespace std;
	cout<<"\nEXPENSES\n";
	double total=0.0;
	for(int i=0;i<Seasons;i++)
	{
		cout<<Snames[i]<<":$"<<pd->arr[i]<<endl;
		total+=pd->arr[i];
	}
	cout<<"Total Expenses:$"<<total<<endl;
}