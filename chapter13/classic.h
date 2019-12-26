// filename classic.h
#ifndef __CLASSIC_H__
#define __CLASSIC_H__
#include"cd.h"
class  Classic :  public Cd 
{
	static  const  unsigned  mk_size = 64;
	char  m_songs[mk_size];
	public: 
	Classic (const  char * songs_list = "", const  char  * s1 = "", const char  * s2 = "", int  n = 0, double  x = 0.0);
	virtual void  Report() const ; // reports all CD data
};
Classic:: Classic (const  char * songs_list, const  char  * s1, const  char  *s2, int  n, double  x)
:  Cd (s1, s2, n, x)
{
	cpStr(m_songs, songs_list, mk_size);
}
void  Classic:: Report () const 
{
	Cd :: Report();
	cout << ", " << m_songs << endl;
}

#endif