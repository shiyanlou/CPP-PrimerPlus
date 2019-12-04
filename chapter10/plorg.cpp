//plorg.cpp
#include<iostream>
#include<cstring>
#include"plorg.h"
Plorg::Plorg()
{
	strcpy(name,"Plorga");
	CI=0;
}
Plorg::Plorg(char*na,intn)
{
	strcpy(name,na);
	CI=n;
}
void Plorg::resetCI(intn)
{
	CI=n;
}
void Plorg::showplorg()const
{
	std:: cout<<"Theplorg'snameis"<<name<<"\n"
	<<"TheCIis"<<CI<<std::endl;
}