// filename cd.h
#ifndef __CD_H__
#define __CD_H__

#include <iostream>
#include <cstring>
using  namespace  std;
// base class 
class  Cd 
{
private:
	char  performers[50];
	char  label[20];
	int  selections; // number of selections
	double  playtime; // playing time in minutes
public: 
	explicit Cd (const  char  * s1 = "", const  char  * s2 = "", int  n = 0, double  x = 0.0);
	virtual ~Cd () {}
	virtual void  Report() const ; // reports all CD data
};
void  cpStr (char * p_des_txt, const  char * p_src_txt, unsigned des_arr_size)
{
	unsigned  str_len = strlen(p_src_txt) < des_arr_size-1 ?
	strlen(p_src_txt) :  des_arr_size-1;
	strncpy(p_des_txt, p_src_txt, str_len);
	p_des_txt[str_len] = '\0';
}
Cd :: Cd  (const  char  * s1, const  char  * s2, int  n, double  x)
:  selections(n), playtime(x)
{
	cpStr(performers, s1, 50);
	cpStr(label, s2, 20);
}
void  Cd :: Report() const 
{
	cout << performers << ", " << label << ", " << selections << ",	" << playtime << flush;
}

#endif
