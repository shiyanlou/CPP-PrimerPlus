#include<iostream>
using namespace std;
const int feet2inch=12;
const double inch2meter=0.0254;
const double kilogram2pound=2.2;
int main()
{
    cout<<"Please input your stature of feet part:";
    int input_feet;
    cin>>input_feet;
    cout<<"Please input your stature of total_inch part:";
    int input_inch;
    cin>>input_inch;
    cout<<"please input your weight in pound:";
    double input_pound;
    cin>>input_pound;
    int total_inch;
    total_inch=input_feet*feet2inch+input_inch;
    double meter;
    meter=total_inch*inch2meter;
    double kilogram;
    kilogram=input_pound/kilogram2pound;
    
    double BMI;
    BMI=kilogram/(meter*meter);
    cout<<"Your BMI is:"<<BMI<<endl;
    return 0;

}