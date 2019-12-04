// 10_6.cpp
#include<iostream>
#include"move.h"
int main()
{
	using std:: cout;
	using std:: endl;
	Movemove1(4,5);
	Movemove2(2,1);
	Movemove3;
	cout<<"The number in move1 is:\n";
	move1.showMove();
	cout<<"The number in move2 is:\n";
	move2.showMove();
	move3=move2.add(move1);
	cout<<"The number in move3 is:\n";
	move3.showMove();
	cout<<"move1+move2,now move2's number is:\n";
	move2.showMove();
	cout<<"After move1+move2,now move1's number is:\n";
	move1.showMove();
	move1.reset();
	cout<<"After reset move1,now move1's number is:\n";
	move1.showMove();
	return 0;
}