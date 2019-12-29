//14-5.cpp
#include"emp.h"
int main(void )
{
	employee em("Trip","Harris","Thumper");
	cout<<em<<endl;
	em.ShowAll();
	manager ma("Amorphia","Spindragon","Nuancer",5);
	cout<<ma<<endl;
	ma.ShowAll();
	fink fi("Matt","Oggs","Oiler","JunoBarr");
	cout<<fi<<endl;
	fi.ShowAll();
	highfink hf(ma,"CurlyKew");
	hf.ShowAll();
	cout<<"Pressakeyfornextphase:\n";
	cin.get();
	highfink hf2;
	hf2.SetAll();
	cout<<"Usinganabstr_emp*point er:\n";
	abstr_emp*tri[4]={&em,&fi,&hf,&hf2};
	for(int i=0;i<4;i++)
	tri[i]->ShowAll();
	return 0;
}