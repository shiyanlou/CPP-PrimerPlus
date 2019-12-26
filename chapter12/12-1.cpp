// filename 12_1.cpp
#include<iostream>
#include<cstring>
using namespace std;
class Cow {
	char name[20];
	char *hobby;
	double weight;
	public:
	Cow ();
	Cow (const char *nm,const char *ho,double wt);
	Cow (const Cow &C);
	Cow& operator= (const Cow &C);
	~Cow ();
	void ShowCow ()const ;
};
Cow ::Cow (){}
Cow ::Cow (const char *nm,const char *ho,double wt)
{
	strcpy(name,nm);
	hobby=new char [strlen(ho)+1];
	strcpy(hobby,ho);
	weight=wt;
}
Cow ::Cow (const Cow &C)
{
	strcpy(name,C.name);
	hobby=new char [strlen(C.hobby)+1];
	strcpy(hobby,C.hobby);
	weight=C.weight;
}
Cow ::~Cow (){delete[]hobby;}
void Cow ::ShowCow ()const 
{
	cout<<name<<endl;
	cout<<hobby<<endl;
	cout<<weight<<endl;
}
Cow& Cow ::operator= (const Cow &C)
{
	this->hobby = C.hobby;
	strcpy(this->name, C.name);
	this->weight = C.weight;
	return *this;
}
int main()
{
	Cow cow;
	Cow ccc("adads","dsdfsad",34);
	cow=ccc;
	cow.ShowCow ();
	ccc.ShowCow ();
}