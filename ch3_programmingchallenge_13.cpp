/*********************
	Jonathan Forrider
	CSCI 113
	2/12/2018
	Property Tax

	Description:  A Program to calculate the property tax and assessment value of a property.
*********************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
    double landValue, assessmentValue, propertyTax;

    cout << "What is the value of your property?" << endl;
    cin >> landValue;
    assessmentValue = landValue * .60;
    propertyTax = (assessmentValue / 100) * .64;

    cout << "Assessment Value:" << setprecision(2) << setw(8) << right << fixed << '$' << assessmentValue << endl; 
    cout << "Property Tax:" << setw(12) << right << fixed << '$' << propertyTax << endl;

	return 0;
	
}