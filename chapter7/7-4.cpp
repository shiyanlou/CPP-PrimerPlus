#include<iostream>
long double probability(unsigned numbers,unsigned picks);
int main()
{
	using namespace std;
	double total,choices,mtotal;
	long double probability1,probability2;
    cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed:\n";
	while((cin>>total>>choices)&&choices<total)
	{
		cout<<"Enter total number of game card choices and\n"
		"number of picks allowed for the mega:\n";
		if(!(cin>>mtotal))
		    break;
		probability1=probability(total,choices);
		probability2=probability(mtotal,1);
		cout<<"The chances of getting all "<<choices<<" picks is one in"
		<<probability1<<".\n";
		cout<<"The chances of getting the megaspot is one in "
		<<probability2<<" .\n";
		cout<<"You have one chance in";
		cout<<probability1*probability2;
		cout<<"of winning.\n";
		cout<<"Next set of numbers(q to quit):";
	}
	cout<<"bye\n";
	return 0;
}
long double probability(unsigned numbers,unsigned picks)
{
	long double result=1.0;
	long double n;
	unsigned p;
	for(n=numbers,p=picks;p>0;n--,p--)
	    result=result*n/p;
	return result;
}