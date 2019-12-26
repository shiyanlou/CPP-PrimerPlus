#include<iostream>
#include<string>
using namespace std;
struct patron{
	string name;
	double money;
};
int main()
{
	int num,temp=0;
	cout<<"Please enter the number of people who donate: ";
	cin>>num;
	cin.get();
	patron*ps=new patron[num];

	string ordinal;
	for(int i=0;i<num;++i)
	{
		switch(i+1)
		{
			case 1:
				ordinal = "1st";
				break;
			case 2:
				ordinal = "2nd";
				break;
			case 3:
				ordinal = "3rd";
				break;
			default:
				ordinal = to_string(i+1) + "th";
				break;
		}
		
		cout<<"Please enter the name of the "<<ordinal<<" donor: ";
		getline(cin,ps[i].name);
		cout<<"Please enter the number of donations from the "<<ordinal<<" donor: ";
		cin>>ps[i].money;
		cin.get();
	}
	cout<<"Grand Patrons:\n";
	for(int i=0;i<num;++i)
        if(ps[i].money>10000)
        {
            cout<<ps[i].name<<"\t"<<ps[i].money<<endl;
            ++temp;
        }
	if(temp==0)
		cout<<"none\n";
	cout<<"Patrons:\n";
	for(int i=0;i<num;++i)
	if(ps[i].money<=10000)
	{
		cout<<ps[i].name<<"\t"<<ps[i].money<<endl;
		++temp;
	}
	if(temp==0)
	cout<<"none\n";
	delete[]ps;
	return 0;
}