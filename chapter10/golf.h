// filename golf.h
#ifndef __GOLF_H__
#define __GOLF_H__
class Golf
{
private:
	static const int Len=40;
	char fullname[Len];
	int handicap;
public:
	Golf();
	Golf(const char*name,int hc);
	const Golf&setgolf(const Golf&g);
	void showgolf()const;
};
#endif