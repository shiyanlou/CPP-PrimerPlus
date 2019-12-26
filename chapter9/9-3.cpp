#include<iostream>
#include<new>
#include<cstring>
using namespace std;
struct chaff
{
	char dross[20];
	int slag;
};
int main()
{
	// 方法一 使用 new 定位符
	char buffer[100];
	chaff*p1 = new(buffer)chaff[2];
	strcpy(p1[0].dross,"aa");
	p1[0].slag=11;
	strcpy(p1[1].dross,"bb");
	p1[1].slag=12;
	for( int i=0;i<2;i++)
		cout<<p1[i].dross<<""<<p1[i].slag<<endl;


	// 方法二 使用常规 new
	chaff*p2=new chaff[2];
	strcpy(p2[0].dross,"cc");
	p2[0].slag=21;
	strcpy(p2[1].dross,"dd");
	p2[1].slag=22;
	for( int i=0;i<2;i++)
		cout<<p2[i].dross<<""<<p2[i].slag<<endl;
	return 0;
}