#include<iostream>
const int MaxSize=20;
using namespace std;
struct message//定义结构描述
{
char firstname[MaxSize];
char lastname[MaxSize];
char grade;
int age;
};

int main()
{
    cout<<"what is your first name?"<<endl;
    message msg;//创建结构变量（结构数据对象）
    cin.getline(msg.firstname,MaxSize);
    cout<<"what is  yourlast name?"<<endl;
    cin.getline(msg.lastname,MaxSize);
    cout<<"what letter grade do you deserve?"<<endl;
    cin>>msg.grade;
    cout<<"what is your age?"<<endl;
    cin>>msg.age;
    cout<<"Name: "<<msg.firstname<<","<<msg.lastname<<endl;
    cout<<"Grade: "<<char(msg.grade+1)<<endl;
    cout<<"Age: "<<msg.age<<endl;
    return 0;
}
