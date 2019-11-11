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
    pizza*pz=new pizza;//使用new创建动态结构
    cout<<"What's the diameter of pizza:";
    cin>>pz->diameter;
    cin.get(); // 读取留在缓冲区的换行符
    cout<<"What's the name of pizza company:";
    cin.getline(pz->company,MaxSize);
    cout<<"What's the weight of pizza:";
    cin>>pz->weight;
    cout<<"company:"<<pz->company<<endl;
    cout<<"diameter:"<<pz->diameter<<" cm"<<endl;
    cout<<"weight:"<<pz->weight<<" kg"<<endl;
    delete pz;//delete释放内存
    return 0;
}