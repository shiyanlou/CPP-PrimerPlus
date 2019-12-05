#include"11_5_class.h"
int main()
{
	Stonewt incognito(275,Stonewt::FPD);
	Stonewt wolfe(285.7,Stonewt::STN);
	Stonewt taft(21,8,Stonewt::INPD);
	Stonewt temp;
	cout<<"The celebrity weighed";
	cout<<incognito<<endl;
	cout<<"The detective weighed";
	cout<<wolfe<<endl;
	cout<<"The President weighed";
	cout<<taft<<endl;
	temp=incognito+wolfe;
	cout<<"Incognito+Wolfe="<<temp<<endl;
	temp=wolfe-incognito;
	cout<<"Wolfe-Incognito="<<temp<<endl;
	temp=taft*10.0;
	cout<<"Taft*10.0="<<temp<<endl;
	temp=10.0*taft;
	cout<<"10.0*Taft="<<temp<<endl;
	return 0;
}