#include<iostream>
const int minutes_per_degree=60;
const int seconds_per_minute=60;
using namespace std;
int main()
{

    cout<<"Enter a latitude in degrees, minutes, and seconds:\n";
    cout<<"First,enter the degrees:";
    int degree;
    cin>>degree;
    cout<<"Next,enter the minutes of arc:";
    int minute;
    cin>>minute;
    cout<<"Fianlly,enter the seconds of arc:";
    int second;
    cin>>second;
    double show_in_degree;
    show_in_degree=(double)degree+(double)minute/minutes_per_degree+(double)second/minutes_per_degree/seconds_per_minute;
    cout<<degree<<"degrees,"<<minute<<"minutes,"<<second<<"seconds="<<show_in_degree<<"degrees\n";
    return 0;
}
