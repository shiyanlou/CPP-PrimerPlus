//move.h
#ifndef __MOVE_H__
#define __MOVE_H__
class Move
{
private:
	double x;
	double y;
public:
	Move(double a=0,double b=0);
	void showMove()const;
	Moveadd(const Move&m)const;
	//thisfunctionaddsxofmtoxofinvokingobjecttogetnewx
	//addyofmtoyofinvokingobjecttogetnewy,createsanew
	//moveobjectinitializedtonewx,yvaluesandreturnsit
	void reset(double a=0,double b=0);
};
#endif