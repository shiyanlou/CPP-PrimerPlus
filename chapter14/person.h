//person.h
#ifndef PERSON_H_
#define PERSON_H_
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
using namespace std;
class Person 
{
	private : 
	string firstname;
	string lastname;
	protected : 
	virtual void Data()const ;
	virtual void Get();
	public : 
	Person (): firstname("noone"),lastname("noone"){}
	Person (const string &f,const string &l): firstname(f),lastname(l){}
	Person (const Person &p): firstname (p.firstname),lastname(p.lastname){}
	virtual ~Person ()=0;
	virtual void Set()=0;
	virtual void Show()const =0;
};
class Gunslinger : virtual public Person 
{
	private : 
	int numsk;
	protected : 
	void Data()const ;
	void Get();
	public : 
	Gunslinger (): numsk(0),Person (){}
	Gunslinger (int nk,const string &f,const string &l): numsk(nk),Person (f,l){}
	Gunslinger (int nk,const Person &p): numsk(nk),Person (p){}
	void Show()const ;
	void Set();
	double Draw()const ;
};
class PokerPlayer : virtual public Person 
{
	protected : 
	void Data()const ;
	public : 
	PokerPlayer (): Person (){}
	PokerPlayer (const string &f,const string &l): Person (f,l){}
	PokerPlayer (const Person &p): Person (p){}
	int Draw()const ;
	void Show()const ;
	void Set(){Person :: Set();}
};
class BadDude : public Gunslinger ,public PokerPlayer 
{
	protected : 
	void Data()const ;
	void Get();
	public : 
	BadDude (){}
	BadDude (int nk,const string &f,const string &l)
	: Person (f,l),Gunslinger (nk,f,l),PokerPlayer (f,l){}
	BadDude (int nk,const Person &p)
	: Person (p),Gunslinger (nk,p),PokerPlayer (p){}
	BadDude (const Gunslinger &g)
	: Person (g),Gunslinger (g),PokerPlayer (g){}
	BadDude (int nk,const PokerPlayer &po)
	: Person (po),Gunslinger (nk,po),PokerPlayer (po){}
	double Gdraw()const ;
	int Cdraw()const ;
	void Set();
	void Show()const ;
};
#endif