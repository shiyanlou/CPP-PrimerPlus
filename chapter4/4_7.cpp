#include<iostream>
#include<string>
using namespace std;
const int MaxSize=20;
struct pizza
{
char company[MaxSize];
double diameter;
double weight;
};
int main()
{
    pizza pz;
    cout<<"What's the name of pizza company:";
    cin.getline(pz.company,MaxSize); // 使用 cin 的方法读取一行数据就只能搭配 char 数组了
    cout<<"What's the diameter of pizza:";
    cin>>pz.diameter;
    cout<<"What's the weight of pizza:";
    cin>>pz.weight;
    cout<<"company:"<<pz.company<<endl;
    cout<<"diameter:"<<pz.diameter<<" cm"<<endl;
    cout<<"weight:"<<pz.weight<<" kg"<<endl;
    return 0;
}