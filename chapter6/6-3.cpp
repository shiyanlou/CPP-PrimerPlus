#include<iostream>
int main()
{
    using namespace std;
    cout<<"Please enter one of the following choices:\n"
    <<"c)carnivore\t\t\tp)pianist\n"
    <<"t)tree\t\t\t\tg)game\nf\n";// 输出菜单

    cout<<"Please enter a c,p,t,or g: ";
    char ch;
    cin>>ch;
    while(ch!='c'&&ch!='p'&&ch!='t'&&ch!='g') // 输入必须要是 c p t g ，否则一直输入
    {
        cout<<"Please enter a c,p,t,or g: ";
        cin>>ch;
    }
    switch(ch)
    {
        case 'c':
            cout<<"A maple is a carnivore.\n";
            break;
        case 'p':
            cout<<"A maple is a pianist.\n";
            break;
        case 't':
            cout<<"A maple is a tree.\n";
            break;
        case 'g':
            cout<<"A maple is a game.\n";
    }
    return 0;
}