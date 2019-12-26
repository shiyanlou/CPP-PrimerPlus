#include<iostream>
const int strsize=20;
struct bop{
	char fullname[strsize]; // real name
	char title[strsize]; //	job title
	char bopname[strsize]; // secret BOP name
	int preference; // 0 = fullname,1 = title,2= bopname
};
int main()
{
	using namespace std;
	cout<<"Benevolent Order of Programmers Report\n"
	<<"a.display by name\t\t\tb.display by title\n"
	<<"c.display by bopname\t\t\td.diplay by preference\n"
	<<"q.quit\n";
	char ch;
	bop member[5]={
		{"Wimp Macho","English Teacher","DEMON",0},
		{"Raki Rhodes","Junior Programmer","BOOM",1},
		{"Celia Laiter","Super Star","MIPS",2},
		{"Hoppy Hipman","Analyst Trainee","WATEE",1},
		{"Pat Hand","Police","LOOPY",2}
	};
	cout<<"Enter your choice:";
	while(cin>>ch&&ch!='q')
	{
		switch(ch)
		{
			case 'a':
                for(int i=0;i<5;i++)
                    cout<<member[i].fullname<<endl;
                break;
			case 'b':
                for(int i=0;i<5;i++)
                    cout<<member[i].title<<endl;
                break;
			case 'c':
                for(int i=0;i<5;i++)
                    cout<<member[i].bopname<<endl;
                break;
			case 'd':
                for(int i=0;i<5;i++)
                {
                    if(member[i].preference==0)
                        cout<<member[i].fullname<<endl;
                    else if(member[i].preference==1)
                        cout<<member[i].title<<endl;
                    else if(member[i].preference==2)
                        cout<<member[i].bopname<<endl;
                }
                break;
		}
		cout<<"Next choice:";
	}
	cout<<"Bye!\n";
	return 0;
}