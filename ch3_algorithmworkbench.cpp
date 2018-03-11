/*********************
	Jonathan Forrider
	CSCI 113
	2/12/2018
	Retail Sales

	Description:  Calculate the total retail sale with Sales Tax added
*********************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
    double retailSale, salesTaxRate, salesTaxAmount, totalSaleAmount;
    cout << "What is the amount of the retail sale?" << endl;
    cin >> retailSale;
    cout << "What is the sales Tax Rate (example: show 6% as .06)?" << endl;
    cin >> salesTaxRate;

    salesTaxAmount = retailSale * salesTaxRate;
    totalSaleAmount = retailSale + salesTaxAmount;
    
    cout << "Retail Sale Amount:" << setprecision(2) << setw(8) << right << fixed << '$' << retailSale << endl; 
    cout << "Sales Tax Amount:" << setw(11) << right << fixed << '$' << salesTaxAmount << endl;
    cout << "----------------------------------" << endl;
    cout << "Total Sale Amount:" << setw(9) << right << fixed << '$' << totalSaleAmount << endl << endl;

	return 0;
	
}