#include<iostream>
int main()
{
    using namespace std;
    cout<<"Enter the world population:";
    long long world_population;
    cin>>world_population;
    cout<<"Enter the population of the US:";
    long long US_population;
    cin>>US_population;
    double percentage;
    percentage=(double)US_population/world_population*100;
    cout<<"The population of the US is "<<percentage<<"% of the world population.\n";
    return 0;
}