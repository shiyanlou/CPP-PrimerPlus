//15-1.cpp
#include"tv.h"
int main()
{
	Tv s42;
	Remote grey;
	grey.mode_show();
	cout<<"Initial settings for 42\"Tv :\n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	cout<<"\nAdjusted settings for42\"Tv :\n";
	s42.settings();
	s42.set_rmode(grey);
	grey.set_chan(s42,10);
	grey.volup(s42);
	grey.volup(s42);
	cout<<"\n42\"settings after using Remote :\n";
	s42.settings();
	Tv s58(Tv :: On);
	s58.set_mode();
	grey.set_chan(s58,28);
	cout<<"\n58\"settings:\n";
	s58.settings();
	s58.set_rmode(grey);
	return 0;
}