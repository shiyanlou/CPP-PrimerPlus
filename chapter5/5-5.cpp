#include<iostream>
const int MONTHS=12;
const char* months[MONTHS]={"January","February","March","April","May","June","July","August","September","October","November","December"};
int main()
{
    using namespace std;
    int sales[MONTHS],sum=0;
    for(int i=0;i<MONTHS;i++)
    {
        cout<<"Please enter the sales volume of C++ for FOOLS in "<<months[i]<<endl;
        cin>>sales[i];
        sum+=sales[i];
    }
    cout<<"The sales volume of C++ for FOOLS in this year was "<<sum<<endl;
    return 0;
}