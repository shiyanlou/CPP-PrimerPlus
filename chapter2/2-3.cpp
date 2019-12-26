#include<iostream>
void print1();
void print2();

int main()
{
    print1();
    print1();
    print2();
    print2();
    return 0;

}
void print1()
{
    std::cout<<"Three blind mice"<<std::endl;
}

void print2()
{
    std::cout<<"See how they run"<<std::endl;
}
