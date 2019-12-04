//move.cpp
#include<iostream>
#include"move.h"
Move::Move(double a,double b)
{
	x=a;
	y=b;
}
void Move::showMove()const
{
	std:: cout<<"x="<<x
	<<",y="<<y<<"\n";
}
MoveMove::add(const Move&m)const
{
	Movetemp;
	temp.x=x+m.x;
	temp.y=y+m.y;
	return temp;
}
void Move::reset(double a,double b)
{
	x=a;
	y=b;
}