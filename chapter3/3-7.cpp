#include<iostream>
int main()
{
    using namespace std;
    cout<<"Enter the automobile gasoline consumption figure in\n"<<"Europeanstyle(liters per 100 kilometers):";
    double Euro_style;
    cin>>Euro_style;
    cout<<"Converts to U.S. style(miles per gallon):"<<endl;
    cout<<Euro_style<<"L/100Km="<<62.14*3.875/Euro_style<<"mpg\n";
    return 0;
}