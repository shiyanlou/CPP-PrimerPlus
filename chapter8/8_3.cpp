#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void str_to_upper(string&str);
int main()
{
	string str1;
	cout<<"Enter a string(q to quit):";
	while(getline(cin,str1)&&str1!="q"&&str1!="Q")
	{
		str_to_upper(str1);
		cout<<str1<<endl;
		cout<<"Next string(q to quit):";
	}
	cout<<"Bye.";
	return 0;
}
void str_to_upper(string&str)
{
	int limit=str.size();
	for( int i=0;i<limit;i++)
	{
		if(isalpha(str[i]))
			str[i]=toupper(str[i]);
	}
}