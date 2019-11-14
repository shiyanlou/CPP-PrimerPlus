#include<iostream>
#include<cctype>
int main()
{
    using namespace std;
    char ch;
    cin.get(ch);
    while(ch!='@')
    {
        if(isdigit(ch))
            cin.get(ch);
        else
        {
            if(islower(ch))
                ch=toupper(ch);
            else
                ch=tolower(ch);
            cout<<ch;
            cin.get(ch);
        }
    }
    return 0;
}