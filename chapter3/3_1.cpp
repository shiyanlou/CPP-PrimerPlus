#include<iostream>
using namespace std; // 使用 std 命名空间
const int feet2inch = 12;//const常量-- 1feet=12inches --1英尺=12英寸
int main()
{
    cout<<"Please input your stature in inch:____\b\b\b\b"; // \b 为退格字符
    int input_inch;
    cin>>input_inch;
    int output_feet= input_inch/feet2inch; // 整数除法，取商
    int output_inch = input_inch%feet2inch; // % 为取余运算
    cout<<"Your stature is "<<output_feet<<" feet,and "<<output_inch<<" inch."<<endl;
    return 0;
}
