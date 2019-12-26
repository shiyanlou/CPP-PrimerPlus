#include<iostream>
const int inch_per_feet=12;//const常量-- 1feet=12inches --1英尺=12英寸
intmain()
{
    usingnamespace std; // 申明使用 std 命名空间
    cout<<"pleaseenteryourheightininches:___\b\b\b";// \b表示为退格字符
    int ht_inch;
    cin>>ht_inch;
    int ht_feet=ht_inch/inch_per_feet;//取商
    int rm_inch = ht_inch%inch_per_feet;//取余
    cout<<"your height is"<<ht_feet<<"feet,and"<<rm_inch<<"inches\n";
    return0;
}