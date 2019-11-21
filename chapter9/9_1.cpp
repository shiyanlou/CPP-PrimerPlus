#include<iostream>
#include"golf.h"
const int Men=5;
int main()
{
	golf golfer[Men];
	int i;
	for( i=0;i<Men;i++)
	{
		if(setgolf(golfer[i])==0)
		break;
	}
	for( int j=0;j<i;j++)
	showgolf(golfer[j]);
	golf ann;
	setgolf(ann,"Ann Birdfree",24);
	showgolf(ann);
	handicap(ann,4);
	showgolf(ann);
	return 0;
}