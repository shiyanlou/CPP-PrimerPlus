#include<iostream>
#include<array>
using namespace std;
int main()
{

    array<double,4>ad={0};
    cout<<"Enter your success of the three times 40 meters running:\n";
    cin>>ad[0]>>ad[1]>>ad[2];
    cout<<"success1:"<<ad[0]<<endl;
    cout<<"success2:"<<ad[1]<<endl;
    cout<<"success3:"<<ad[2]<<endl;
    ad[3]=(ad[0]+ad[1]+ad[2])/3;
    cout<<"average:"<<ad[3]<<endl;
    return 0;
}