#include<iostream>
int main()
{
    using namespace std;
    int sum=0,num=0;
    do
    {
        sum+=num;
        cout<<"So far,the sum is "<<sum<<endl;
        cout<<"Please enter an integer:";
    }while((cin>>num)&&num!=0);

    return 0;
}