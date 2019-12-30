#include<iostream>
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <fstream>

/* reads from keypress, doesn't echo */
int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

/* reads from keypress, echoes */
int getche(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

using namespace std;
int main()
{
    char txt[1000];
    int cnt = 0;
    char filename[100];

    cout<<"Please enter file name "<<endl;
    cin >> filename;
    getch();
    ofstream out(filename);
    if (out.is_open()) 
    {
        do
        {
            txt[cnt] = getch();
            cout << txt[cnt];
            cnt++;
        } while (txt[cnt-1] != 4);

        cout << endl << cnt-1 << " characters read" << endl;
        txt[cnt-1] = '\0';
        out<<txt;
        out.close();
    }

    


    return 0;
}
