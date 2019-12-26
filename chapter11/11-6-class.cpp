//11_6_class.cpp
#include"11_6_class.h"
Stonewt ::Stonewt (double lbs)
{
	stone=int (lbs)/Lbs_per_stn;
	pds_left=int (lbs)%Lbs_per_stn+lbs-int (lbs);
	pounds=lbs;
}
Stonewt ::Stonewt (int stn,double lbs)
{
	stone=stn;
	pds_left=lbs;
	pounds=stn*Lbs_per_stn+lbs;
}
Stonewt ::Stonewt ()
{
	stone=pounds=pds_left=0;
}
Stonewt ::~Stonewt ()
{
}
bool Stonewt ::operator <(const Stonewt &st)const 
{
	if(pounds<st.pounds)
	return true;
	else 
	return false;
}
bool Stonewt ::operator <=(const Stonewt &st)const 
{
	if(pounds<=st.pounds)
	return true;
	else 
	return false;
}
bool Stonewt ::operator >(const Stonewt &st)const 
{
	if(pounds>st.pounds)
	return true;
	else 
	return false;
}
bool Stonewt ::operator >=(const Stonewt &st)const 
{
	if(pounds>=st.pounds)
	return true;
	else 
	return false;
}
bool Stonewt ::operator ==(const Stonewt &st)const 
{
	if(pounds==st.pounds)
	return true;
	else 
	return false;
}
bool Stonewt ::operator !=(const Stonewt &st)const 
{
	if(pounds!=st.pounds)
	return true;
	else 
	return false;
}
ostream&operator <<(ostream&os,const Stonewt &st)
{
	os<<st.pounds<<"pounds\n";
	return os;
}