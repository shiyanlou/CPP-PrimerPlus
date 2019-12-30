//17-1.cpp
#include<iostream>
int main(void )
{
	using namespace std;
	char ch;
	int count=0;
	while(cin.get(ch)&&ch!='$')
	count++;
	if(ch=='$')
	cin.putback(ch);
	else 
	cout<<"End of input was reached\n";
	cout<<count<<"characters read\n";
	cin.get(ch);
	cout<<"Then next input characteris"<<ch<<endl;
	return 0;
}