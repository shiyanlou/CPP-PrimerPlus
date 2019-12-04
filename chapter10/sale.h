//sale.h
#ifndef __SALE_H__
#define __SALE_H__
namespace SALES
{
	const int QUARTERS=4;
	class Sales
	{
		private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;
		public:
		//defaultconstructor
		Sales();
		//copiesthelesserof4ornitemsfromthearrayar
		//tothesalesmemberofsandcomputesandstoresthe
		//average,maximum,andminimumvaluesoftheentereditems;
		//remainingelementsofsales,ifany,setto0
		Sales(const double ar[],int n);
		//gatherssalesfor4quartersinteractively,storesthem
		//inthesalesmemberofsandcomputesandstoresthe
		//average,maximum,andminimumvalues
		void setSales();
		//displayallinformationinstructures
		void showSales()const;
	};
}
#endif