//person.cpp
#include"person.h"
Person:: ~Person(){}
void Person:: Data()const 
{
	cout<<"Firstnameis: "<<firstname<<endl;
	cout<<"Lastnameis: "<<lastname<<endl;
}
void Person:: Get()
{
	cout<<"Enterfirstname: \n";
	getline(cin,firstname);
	cout<<"Enterlastname: \n";
	getline(cin,lastname);
}
void Person:: Show()const 
{
	Data();
}
void Person:: Set()
{
	Get();
}
void Gunslinger:: Data()const 
{
	cout<<"Nickis: "<<numsk<<endl;
	cout<<"Thetimeofgetthegun: "<<Gunslinger:: Draw()<<endl;
}
void Gunslinger:: Get()
{
	cout<<"EnterNick: \n";
	cin>>numsk;
}
void Gunslinger:: Set()
{
	cout<<"EnterGunsname: \n";
	Person:: Get();
	Get();
}
void Gunslinger:: Show()const 
{
	cout<<"Gunslinger: \n";
	Person:: Data();
	Data();
}
double Gunslinger:: Draw()const 
{
	return rand()%3+1;
}
int PokerPlayer:: Draw()const 
{
	return rand()%52+1;
}
void PokerPlayer:: Data()const 
{
	cout<<"Thecards: "<<Draw()<<endl;
}
void PokerPlayer:: Show()const 
{
	cout<<"PokerPlayer: \n";
	Person:: Data();
	Data();
}
double BadDude:: Gdraw()const 
{
	return Gunslinger:: Draw();
}
int BadDude:: Cdraw()const 
{
	return PokerPlayer:: Draw();
}
void BadDude:: Data()const 
{
	Gunslinger:: Data();
	PokerPlayer:: Data();
	cout<<"Thenextcards: "<<Cdraw()<<endl;
	cout<<"ThetimeofBadDudegetthegun: "<<Gdraw()<<endl;
}
void BadDude:: Get()
{
	Gunslinger:: Get();
}
void BadDude:: Set()
{
	cout<<"EnterBadDudename: \n";
	Person:: Get();
	Get();
}
void BadDude:: Show()const 
{
	cout<<"BadDude: \n";
	Person:: Data();
	Data();
}