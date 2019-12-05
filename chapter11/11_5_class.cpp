//stonewt.cpp
#include"11_5_class.h"
void Stonewt::set_stn()
{
	stone=int (pounds)/Lbs_per_stn;
	pds_left=int (pounds)%Lbs_per_stn+pounds-int (pounds);
}
void Stonewt::set_pds()
{
	pounds=stone*Lbs_per_stn+pds_left;
}
void Stonewt::set_pds_int ()
{
	pounds_int =int (pounds);
}
Stonewt::Stonewt(double lbs,Mode form)
{
	mode=form;
	if(form==STN)
	{
		stone=int (lbs)/Lbs_per_stn;
		pds_left=int (lbs)%Lbs_per_stn+lbs-int (lbs);
		set_pds();
		set_pds_int ();
	}
	else if(form==INPD)
	{
		pounds_int =int (lbs);
		pounds=lbs;
		set_stn();
	}
	else if(form==FPD)
	{
		pounds=lbs;
		set_pds_int ();
		set_stn();
	}
	else 
	{
		cout<<"Incorrect 3rd argument to Stonewt()--";
		cout<<"Stonewt set to 0\n";
		stone=pounds=pds_left=0;
		mode=STN;
	}
}
Stonewt::Stonewt(int stn,double lbs,Mode form)
{
	mode=form;
	if(form==STN)
	{
		stone=stn;
		pds_left=lbs;
		set_pds();
		set_pds_int ();
	}
	else if(form==INPD)
	{
		pounds_int =int (stn*Lbs_per_stn+lbs);
		pounds=stn*Lbs_per_stn+lbs;
		set_stn();
	}
	else if(form==FPD)
	{
		pounds=stn*Lbs_per_stn+lbs;
		set_pds_int ();
		set_stn();
	}
	else 
	{
		cout<<"Incorrect 3rd argument to Stonewt()--";
		cout<<"Stonewt set to 0\n";
		stone=pounds=pds_left=0;
		mode=STN;
	}
}
Stonewt::Stonewt()
{
	stone=pounds=pds_left=0;
	mode=STN;
}
Stonewt::~Stonewt()
{
}
void Stonewt::stn_mode()
{
	mode=STN;
}
void Stonewt::pds_mode()
{
	mode=FPD;
}
void Stonewt::int_pds_mode()
{
	mode=INPD;
}
Stonewt::operator int ()const 
{
	return int (pounds+0.5);
}
Stonewt::operator double ()const 
{
	return pounds;
}
Stonewt Stonewt::operator +(const Stonewt&st)const 
{
	return Stonewt(pounds+st.pounds,st.mode);
}
Stonewt Stonewt::operator -(const Stonewt&st)const 
{
	return Stonewt(pounds-st.pounds,st.mode);
}
Stonewt Stonewt::operator *(double n)const 
{
	return Stonewt(pounds*n,mode);
}
Stonewt operator *(double n,const Stonewt&st)
{
	return Stonewt(n*st.pounds,st.mode);
}
ostream&operator <<(ostream&os,const Stonewt&st)
{
	if(st.mode==Stonewt::STN)
	os<<st.stone<<"stone,"<<st.pds_left<<"pounds\n";
	else if(st.mode==Stonewt::INPD)
	os<<st.pounds_int <<"pounds(int )\n";
	else if(st.mode==Stonewt::FPD)
	os<<st.pounds<<"pounds(double )\n";
	else 
	os<<"Errorint ype\n";
	return os;
}