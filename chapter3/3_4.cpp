#include<iostream>
const int hours_per_day=24;
const int minutes_per_hour=60;
const int seconds_per_minute=60;
int main()
{
    using namespace std;
    cout<<"Enterthenumberofseconds:";
    long seconds;
    cin>>seconds;
    int Day,Hour,Minute,Second;
    Day=seconds/seconds_per_minute/minutes_per_hour/hours_per_day;
    Hour=seconds/seconds_per_minute/minutes_per_hour%hours_per_day;
    Minute=seconds/seconds_per_minute%minutes_per_hour;
    Second=seconds%seconds_per_minute;
    cout<<seconds<<" seconds = "<<Day<<" days,"<<Hour<<" hours,"<<Minute<<" minutes,"<<Second<<" seconds\n";
    return 0;
}