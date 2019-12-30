#include<iostream>
#include<fstream>
#include<cstdlib>
int main(int argc,char *argv[])
{
	using namespace std;
	if(argc<3)
	{
		cerr<<"Usage:"<<argv[0]
		<<"source-filetarget-file\n";
		exit(EXIT_FAILURE);
	}
	ifstream fin(argv[1]);
	if(!fin)
	{
		cerr<<"Can'topen"<<argv[1]<<"forinput\n";
		exit(EXIT_FAILURE);
	}
	ofstream fout(argv[2]);
	if(!fout)
	{
		cerr<<"Can'topen"<<argv[2]<<"foroutput\n";
		exit(EXIT_FAILURE);
	}
	char ch;
	while(fin.get(ch))
	fout<<ch;
	cout<<"Contentsof"<<argv[1]<<"copiedto"
	<<argv[2]<<endl;
	fin.close();
	fout.close();
	return 0;
}