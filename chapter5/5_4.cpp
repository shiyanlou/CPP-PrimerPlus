#include <iostream>
int main()
{
    using namespace std;
    double sum1,sum2;
    sum1=sum2=0.0;
    int year=0;
    while(sum2<=sum1)
    {
        ++year;
        sum1+=10;
        sum2=(100+sum2)*0.05+sum2;
    }
    cout<<"After "<<year<<" years，the investment value of Cleo can exceed Daphne"<<endl;
    cout<<"At this time, the investment value of Cleo is "<<sum1<<" and Daphne's investment value is "<<sum2<<endl;
    return 0;
}