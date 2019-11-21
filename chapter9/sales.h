// filename sales.h
namespace SALES
{
	const int QUARTERS=4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	//copiesthelesserof4ornitemsfromthearrayar
	//tothesalesmemberofsandcomputesandstoresthe
	//average,maximum,andminimumvaluesoftheentereditems;
	//remainingelementsofsales,ifany,setto0
	void setSales(Sales&s,const double ar[],int n);
	//gatherssalesfor4quartersinteractively,storesthem
	//inthesalesmemberofsandcomputesandstoresthe
	//average,maximum,andminimumvalues
	void setSales(Sales&s);
	//displayallinformationinstructures
	void showSales(const Sales&s);
}