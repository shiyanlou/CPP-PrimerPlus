#include<iostream>

double C2F(double C)
{
    return C * 1.8 + 32.0;
}

int main()
{
    double  C,F;
    std::cout<<"Please enter a Celsius value: ";
    std::cin >> C;

    F = C2F(C);

    std::cout<<C<<" degrees Celsius is "<<F<<" degrees Fahrenheit."<<std::endl;;
    return 0;

}
