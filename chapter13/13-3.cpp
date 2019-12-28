// filename 13-3.cpp
#include <iostream>
#include <string>
#include "abc.h"
const int MAXABCS = 3;
const int MAXSTR = 100;
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	
	ABC * abcs[MAXABCS];
    char templable[MAXSTR];
	int tempnum;
	char kind;
	
	for (int i = 0; i < MAXABCS; i++)
	{
		cout << "Enter label: ";
		cin.getline(templable,MAXSTR) ;

		cout << "Enter rating: ";
		cin >> tempnum;
		
		cout << "Enter 1 for baseDMA or "
		<< "2 for lacksDMA or "
		<< "3 for hasDMA : ";
		while (cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
		    cout <<"Enter either 1, 2 or 3 : ";
		switch (kind)
        {
            case '1':
                abcs[i] = new baseDMA(templable, tempnum);
                break;
            case '2':
                char color[10];
                cout << "Enter color : ";
                cin >> color;
                abcs[i] = new lacksDMA(color, templable, tempnum);
                break;
            case '3':
                char style[10];
                cout << "Enter style : ";
                cin >> style;
                abcs[i] = new hasDMA(style, templable, tempnum);
                break;
        }

		while (cin.get() != '\n')
		    continue;
	}
	cout << endl;
	for (int i = 0; i < MAXABCS; i++)
	{
		abcs[i]->View();
		cout << endl;
	}
	
	for (int i = 0; i < MAXABCS; i++)
	{
		delete abcs[i];  // free memory
	}
	cout << "Done.\n";         
	return 0; 
}
