#include<iostream>
using namespace std;
const int Num=100;
int main()
{
    double donation[Num];
    int i=0;
    int count=0;
    double sum=0.0;
    cout<<"Please enter:\n";
    while(i<Num&&cin>>donation[i])
    {
        sum+=donation[i++];
    }
    if(i==0)
        cout<<"Nodata--bye\n";
    else
    {
        double average=sum/i;
        for(int j=0;j<i;j++)
        {
            if(donation[j]>average)
            ++count;
        }
        cout<<"The average= "<<average<<endl<<"The numbers bigger than the average: "<<count<<endl;
    }
    return 0;
}