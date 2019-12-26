#include<iostream>
#include<fstream>
#include<cstdlib>
int main()
{
	using namespace std;
	char ch;
	int sum=0;
	ifstream inFile;
	inFile.open("test.txt");
	if(!inFile.is_open())
	{
		cout<<"Could not open the file\n";
		cout<<"Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	inFile>>ch;
	while(inFile.good())
	{
		++sum;
		inFile>>ch;
	}
	if(inFile.eof())
	    cout<<"End of file reached.\n";
	else if(inFile.fail())
	    cout<<"Input terminated by data mismatch.\n";
	else
	    cout<<"Input terminated for unkonwn reason.\n";
	cout<<"There are "<<sum<<" characters in the file."<<endl;
	return 0;
}