
//emp.cpp
#include"emp.h"
abstr_emp:: abstr_emp():fname("noone"),lname("noone"),job("nojob")
{
}
abstr_emp:: abstr_emp(const string &fn,const string &ln,
const string &j):fname(fn),lname(ln),job(j)
{
}
void abstr_emp:: ShowAll()const 
{
	cout<<"first  name:"<<fname<<endl;
	cout<<"last  name:"<<lname<<endl;
	cout<<"Job is:"<<job<<endl;
}
void abstr_emp:: SetAll()
{
	cout<<"Enter first name:";
	getline(cin,fname);
	cout<<"Enter last name:";
	getline(cin,lname);
	cout<<"Enter position:";
	getline(cin,job);
}
ostream&operator <<(ostream&os,const abstr_emp&e)
{
	os<<e.fname<<""<<e.lname<<","<<e.job<<endl;
	return os;
}
abstr_emp:: ~abstr_emp()
{
}
employee:: employee():abstr_emp()
{
}
employee:: employee(const string &fn,const string &ln,
const string &j):abstr_emp(fn,ln,j)
{
}
void employee:: ShowAll()const 
{
	abstr_emp:: ShowAll();
}
void employee:: SetAll()
{
	abstr_emp:: SetAll();
}


manager:: manager():abstr_emp()
{
}
manager:: manager(const string &fn,const string &ln,
const string &j,int ico):abstr_emp(fn,ln,j),inchargeof(ico)
{
}
manager:: manager(const abstr_emp&e,int ico):abstr_emp(e),inchargeof(ico)
{
}
manager:: manager(const manager&m):abstr_emp(m)
{
}
void manager:: ShowAll()const 
{
	abstr_emp:: ShowAll();
	cout<<"inchargeof:"<<InChargeOf()<<endl;
}
void manager:: SetAll()
{
	abstr_emp:: SetAll();
	cout<<"Enter inchargeof:";
	(cin>>inchargeof).get();
}
fink:: fink():abstr_emp()
{
}
fink:: fink(const string &fn,const string &ln,
const string &j,const string &rpo):abstr_emp(fn,ln,j),reportsto(rpo)
{
}
fink:: fink(const abstr_emp&e,const string &rpo):abstr_emp(e),reportsto(rpo)
{
}
fink:: fink(const fink&e):abstr_emp(e)
{
}
void fink:: ShowAll()const 
{
	abstr_emp:: ShowAll();
	cout<<"Reportsto:"<<ReportsTo()<<endl;
}
void fink:: SetAll()
{
	abstr_emp:: SetAll();
	cout<<"Enter reportsto:";
	cin>>reportsto;
}
highfink:: highfink():abstr_emp(),manager(),fink()
{
}
highfink:: highfink(const string &fn,const string &ln,
const string &j,const string &rpo,int ico):abstr_emp(fn,ln,j),manager(fn,ln,j,ico),fink(fn,
ln,j,rpo)
{
}
highfink:: highfink(const abstr_emp&e,const string &rpo,int ico):abstr_emp(e),manager(e,ico),
fink(e,rpo)
{
}
highfink:: highfink(const fink&f,int ico):abstr_emp(f),manager(f,ico),fink(f)
{
}
highfink:: highfink(const manager&m,const string &rpo):abstr_emp(m),manager(m),fink(m,
rpo)
{
}
highfink:: highfink(const highfink&h):abstr_emp(h),manager(h),fink(h)
{
}
void highfink:: ShowAll()const 
{
	abstr_emp:: ShowAll();
	cout<<"InChargeOf:"<<manager:: InChargeOf()<<endl;
	cout<<"ReportsTo:"<<fink:: ReportsTo()<<endl;
}
void highfink:: SetAll()
{
	abstr_emp:: SetAll();
	manager:: getInCharge();
	fink:: getReportsTo();
}