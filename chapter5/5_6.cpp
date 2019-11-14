#include<iostream>
const int MONTHS=12;
const char* months[MONTHS]={"January","February","March","April","May","June","July","August","September","October","November","December"};

const char *years[3]={"2019","2020","2021"};
int main()
{
    using namespace std;
    int year_sale[3],sum=0,sales[3][MONTHS];
    for(int i=0;i<3;i++)
    {
        int temp=0;
        cout<<years[i]<<endl;
        for(int j=0;j<MONTHS;j++)
        {
            cout<<"Please enter the sales volume of C++ for FOOLS in "<<months[i]<<endl;
            cin>>sales[i][j];
            temp+=sales[i][j];
        }
        year_sale[i]=temp;
        sum+=year_sale[i];
    }
    for(int i=0;i<3;i++)
    {
        cout<<"In "<<years[i]<<",the sales volume of C++ for FOOLS is "<<year_sale[i]<<endl;
        
    }
    cout<<"The total sales volume for the three years is "<<sum<<endl;

    return 0;
}
