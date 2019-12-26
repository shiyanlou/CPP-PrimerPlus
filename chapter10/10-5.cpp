// 10_5.cpp
#include<iostream>
#include<cctype>
#include<cstring>
#include"stack.h"
int main()
{
	using namespace std;
	Stack st;
	customer temp;

    strcpy(temp.fullname,"one");
    temp.payment = 1;
    st.push(temp);

    strcpy(temp.fullname,"two");
    temp.payment = 2;
    st.push(temp);

    st.pop();

	return 0;
}
