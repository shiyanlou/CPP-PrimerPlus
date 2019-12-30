#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include<cstdlib>
void ShowStr(const std:: string &s);
void GetStrs(std:: istream&is,std:: vector<std:: string >&vs);
class Store 
{
	public :
	std:: ostream&os;
	Store (std:: ostream&o):os(o){}
	void operator ()(const std:: string &s);
};
int main()
{
	using namespace std;
	vector<string >vostr;
	string temp;
	//acquirestring s
	cout<<"Enter strings(empty line to quit):\n";
	while(getline(cin,temp)&&temp[0]!='\0')
	vostr.push_back(temp);
	cout<<"Here is your input.\n";
	for_each(vostr.begin(),vostr.end(),ShowStr);
	//storeinafile
	ofstream fout("strings.dat",ios_base:: out|
	ios_base:: binary);
	for_each(vostr.begin(),vostr.end(),Store (fout));
	fout.close();
	//recoverfilecontents
	vector<string >vistr;
	ifstream fin("strings.dat",ios_base:: in|ios_base:: binary);
	if(!fin.is_open())
	{
		cerr<<"Could not open file for input.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin,vistr);
	cout<<"\nHere are the strings read from the file:\n";
	for_each(vistr.begin(),vistr.end(),ShowStr);
	return 0;
}
void ShowStr(const std:: string &s)
{
	std:: cout<<s<<std:: endl;
}
void Store :: operator ()(const std:: string &s)
{
	std:: size_t len=s.size();
	os.write((char *)&len,sizeof(std:: size_t ));
	os.write(s.data(),len);
}
void GetStrs(std:: istream&is,std:: vector<std:: string >&vs)
{
	std:: string temp;
	size_t len;
	while(is.read((char *)&len,sizeof(size_t ))&&len>0)
	{
		char ch;
		temp="";
		for(int j=0;j<len;j++)
		{
			if(is.read(&ch,1))
			{
				temp+=ch;
			}
			else 
			break;
		}
		if(is)
		vs.push_back(temp);
	}
}