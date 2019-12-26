// filename classic.h
#ifndef __CLASSIC_H__
#define __CLASSIC_H__
#include"cd-new.h"
class  Classic :  public Cd 
{ 
private:
	char * songs;
public:  
	explicit Classic (const  char * songs_list = "", const  char  * s1 = "", const  char  * s2 = "", int  n = 0, double  x = 0.0);
	Classic (const  Classic& classic); 
	virtual ~Classic ();
	Classic& operator = (const  Classic& classic); virtual void  Report() const ; // reports all CD data
};
Classic:: Classic (const  char * songs_list, const  char  * s1, const  char  * s2, int  n, double  x)
:  Cd (s1, s2, n, x)
{ 
	songs = cpNewStr(songs_list);
}
Classic:: Classic (const  Classic& classic)
:  Cd (classic)
{ 
	songs = cpNewStr(classic.songs);
}
Classic:: ~Classic ()
{
	delete [] songs;
}
Classic & Classic:: operator = (const  Classic& classic)
{
	if (&classic == this) 
		return  (*this);
	Cd :: operator =(classic);
	delete [] songs; 
	songs = cpNewStr(classic.songs); 
	return  (*this);
}
void  Classic:: Report () const 
{
	Cd :: Report(); cout << ", " << songs << endl;
}


#endif