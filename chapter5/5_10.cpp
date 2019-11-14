#include<iostream>
int main()
{
    using namespace std;
    cout<<"Enter number of rows:";
    int num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=num-i;j>1;j--)
            cout<<".";
        for(int k=0;k<=i;++k)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}