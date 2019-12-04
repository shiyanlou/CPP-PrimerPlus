//plorg.h
#ifndef __PLORG_H__
#define __PLORG_H__
class Plorg
{
	private:
	char name[20];
	int CI;
	public:
	Plorg();
	Plorg(char*na,intn=50);
	void resetCI(intn);
	void showplorg()const;
};
#endif