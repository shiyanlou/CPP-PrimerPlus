// filename 9_4.cpp
#include<iostream>
#include"sales.h"
using namespace std;
int main()
{
	using namespace SALES;
	Sales salesBook;
	double salesList[]={12.2,11.16,10.61,16.24,11.53};
	setSales(salesBook,salesList,sizeof(salesList)/sizeof(salesList[0]));
	showSales(salesBook);
	Sales salesPen;
	setSales(salesPen);
	showSales(salesPen);
    return 0;
}
