//10_7.cpp
#include<iostream>
#include"plorg.h"

int main()
{
	using namespace std;
	Plorg plorg1;
	plorg1.showplorg();
	Plorgp lorg2("heyyroup",31);
	plorg2.showplorg();
	plorg1.resetCI(41);
	plorg1.showplorg();
	return 0;
}