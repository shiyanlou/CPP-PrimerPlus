#include<iostream>
#include<cstring>
using namespace std;
class Stock {
	char *company;
	int shares;
	double share_val;
	double total_val;
	void set_tot(){total_val=shares*share_val;};
	public:
	Stock (){
		company=new char [8];
		strcpy(company,"noname");
		shares=0;
		share_val=0.0;
		total_val=0.0;
	}
	Stock (const char *co,long n=0,double pr=0)
	{
		int len=strlen(co);
		company=new char [len+1];
		strcpy(company,co);
		if(n<0)
		{
			cout<<"Number of shares sold can't be negative."
			<<"Transaction is aborted."<<endl;
			shares=0;
		}
		else 
		shares=n;
		share_val=pr;
		set_tot();
	}
	~Stock ()
	{
		delete[]company;
	}
	void buy(long num,double price)
	{
		if(num<0)
		{
			cout<<"Number of shares sold can't be negative."
			<<"Transaction is aborted."<<endl;
		}
		else 
		{
			shares+=num;
			share_val=price;
			set_tot();
		}
	}
	void sell(long num,double price)
	{
		if(num<0)
		{
			cout<<"Number of shares sold can't be negative."
			<<"Transaction is aborted."<<endl;
		}
		else if(num>shares)
		{
			cout<<"You can't sell more than you have!"
			<<"Transaction is aborted."<<endl;
		}
		else 
		{
			shares-=num;
			share_val=price;
			set_tot();
		}
	}
	void update(double price)
	{
		share_val=price;
		set_tot();
	}
	const Stock &topval(const Stock &s)const 
	{
		if(s.total_val>total_val)
		return s;
		else 
		return *this;
	}
	friend ostream&operator <<(ostream&os,const Stock &s)
	{
		os<<"Company:"<<s.company
		<<"\nShares: "<<s.shares;
		os<<"\nShare Price:$"<<s.share_val;
		os<<"\nTotal Worth:&"<<s.total_val<<endl;
		return os;
	}
};
const int STKS=4;
int main()
{
	//createanarrayofinitializedobjects
	Stock stocks[STKS]={
		Stock ("Nano Smart",12,20.0),
		Stock ("Boffo Objects",200,2.0),
		Stock ("Monolithic Obelisks",130,3.25),
		Stock ("Fleep Enter prises",60,6.5)
	};
	cout<<"Stock holdings:\n";
	int st;
	for(st=0;st<STKS;st++)
	cout<<stocks[st];
	//setpoint ertofirstelement
	const Stock *top=&stocks[0];
	for(st=1;st<STKS;st++)
	top=&top->topval(stocks[st]);
	//nowtoppoint stothemostvaluableholding
	cout<<"\nMost valuable holding:\n";
	cout<<*top;
	return 0;
}