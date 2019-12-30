//17-5.cpp
#include<iostream>
#include<fstream>
#include<set>
#include<algorithm>
#include<iterator>
#include<cstdlib>
#include<string>
int main()
{
	using namespace std;
	ifstream mat("mat.dat");
	if(!mat.is_open())
	{
		cerr<<"Can'topen mat.dat.\n";
		exit(1);
	}
	ifstream pat("pat.dat");
	if(!pat.is_open())
	{
		cerr<<"Can'topen pat.dat.\n";
		exit(1);
	}
	ofstream matnpat("matnpat.dat");
	if(!matnpat.is_open())
	{
		cerr<<"Can'topenpat.dat.\n";
		exit(1);
	}
	string temp;
	set<string >mats;
	while(getline(mat,temp))
	mats.insert(temp);
	ostream_iterator<string ,char >out(cout,"\n");
	cout<<"Mat'sguestlist:\n";
	copy(mats.begin(),mats.end(),out);
	set<string >pats;
	while(getline(pat,temp))
	pats.insert(temp);
	cout<<"\nPat'sguestlist:\n";
	copy(pats.begin(),pats.end(),out);
	ostream_iterator<string ,char >fout(matnpat,"\n");
	set<string >both;
	set_union(mats.begin(),mats.end(),pats.begin(),
	pats.end(),
	insert_iterator<set<string >>(both,both.begin()));
	cout<<"\nMergedguestlist:\n";
	copy(both.begin(),both.end(),out);
	copy(both.begin(),both.end(),fout);
	return 0;
}
