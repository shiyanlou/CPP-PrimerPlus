#include<iostream>
int main()
{
    using namespace std;
    cout<<"Please enter two integers:";
    int num1,num2;
    cin>>num1>>num2;
    int sum=0;
    for(int temp=num1;temp<=num2;++temp)
        sum+=temp;
    cout<<"The sum from "<<num1<<" to "<<num2<<" is "<<sum<<endl;
    return 0;
}