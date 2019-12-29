//tv.h
#ifndef TV_H_
#define TV_H_
#include<iostream>
using namespace std;
class Remote; // 两个类互相包含，所以要先来个空头定义，后具体定义
class Tv 
{
	friend class Remote ;
	public :
	enum {Off,On};
	enum {MinVal,MaxVal=20};
	enum {Antenna,Cable};
	enum {TV,DVD};
	enum {USUAL,EXCHANGE};
	Tv (int s=Off,int mc=125):state(s),volume(5),
	maxchannel(mc),channel(2),mode(Cable),input(TV){}
	~Tv (){}
	void onoff(){state=(state==On)?Off:On;}
	bool ison()const {return state==On;}
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode(){mode=(mode==Antenna)?Cable:Antenna;}
	void set_input(){input=(input==TV)?DVD:TV;}
	void settings()const ;
	void set_rmode(Remote &r);
	private :
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};
class Remote 
{
	private :
	friend class Tv ;
	enum {USUAL,EXCHANGE};
	int mode;
	int fmode;
	public :
	Remote (int m=Tv :: TV,int f=USUAL):mode(m),fmode(f){}
	bool volup(Tv &t){return t.volup();}
	bool voldown(Tv &t){return t.voldown();}
	void onoff(Tv &t){t.onoff();}
	void chanup(Tv &t){t.chanup();}
	void chandown(Tv &t){t.chandown();}
	void set_chan(Tv &t,int c){t.channel=c;}
	void set_mode(Tv &t){t.set_mode();}
	void set_input(Tv &t){t.set_input();}
	void mode_show()const {cout<<"Remote pretentmodeis"<<fmode<<endl;}
};
inline void Tv :: set_rmode(Remote &r)
{
	if(ison())
	{
		r.fmode=Remote :: EXCHANGE;
		r.mode_show();
	}
}
#endif