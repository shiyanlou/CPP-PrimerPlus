// filename cd-new.h
#ifndef __CD_H__
#define __CD_H__
#include<iostream>
#include<cstring>

using namespace std;
class  Cd 
{ 
private:
	char * performers; 
	char * label;
	int  selections; // number of selections 
	double  playtime; // playing time in minutes 
public:  
	explicit Cd (const  char  * s1 = "", const  char  * s2 = "", int  n = 0, double  x = 0.0);
	Cd (const  Cd  & d); virtual ~Cd (); 
	virtual void  Report() const ; // reports all CD data 
	Cd  & operator =(const  Cd  & d);
};
char * cpNewStr (const  char * p_src_txt)
{ 
	unsigned  str_len = strlen(p_src_txt); 
	char * p_des_txt = new  char  [str_len + 1]; 
	strcpy(p_des_txt, p_src_txt); 
	return  (p_des_txt);
}
Cd :: Cd  (const  char  * s1, const  char  * s2, int  n, double  x)
:  selections(n), playtime(x)
{
	performers = cpNewStr(s1);
	label = cpNewStr(s2);
}
Cd :: ~Cd  ()
{
	delete [] performers;
	delete [] label;
}
Cd :: Cd (const  Cd  & d)
:  selections(d.selections), playtime(d.playtime)
{
	performers = cpNewStr(d.performers);
	label = cpNewStr(d.label);
}
Cd  & Cd :: operator =(const  Cd  & d)
{
	if (&d == this) 
	{ 
		return  (*this);
	}
	delete [] performers;
	performers = cpNewStr(d.performers);
	delete [] label;
	label = cpNewStr(d.label); selections = d.selections;
	playtime = d.playtime; return  (*this);
}
void  Cd :: Report() const 
{ 
	cout << performers << ", " << label << ", " << selections << ", " << playtime << flush;
}

#endif
