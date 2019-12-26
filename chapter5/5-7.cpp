#include<iostream>
#include<string>
using namespace std;
struct car{
    string name;
    int year;
};
int main()
{
    cout<<"How many cars do you wish to catalog? ";
    int num;
    (cin>>num).get();
    car*ps=new car[num];
    for(int i=0;i<num;++i)
    {
        cout<<"Car #"<<i+1<<":\n";
        cout<<"Please enter the make: ";
        getline(cin,ps[i].name);
        cout<<"Please enter the year made: ";
        (cin>>ps[i].year).get();
    }
    cout<<"Here is your collection:\n";
    for(int i=0;i<num;++i)
        cout<<ps[i].year<<" "<<ps[i].name<<endl;
    delete[] ps;
    return 0;
}