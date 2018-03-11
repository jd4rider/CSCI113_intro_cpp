/*********************
	Jonathan Forrider
	CSCI 113
	2/5/2018
	Restaurant Bill

	Description:  This program determines tax and tip. q.4
*********************/
#include <iostream>
using namespace std;

int main()
{
	double tax, tip, meal, bill; 

    meal = 44.50;
    tax = meal * .0675;
    bill = meal + tax;
    tip = bill * .15;
    bill = bill + tip;

    

    cout << "Meal: " << meal << endl
        << "Tax: " << tax << endl
        << "Tip: " << tip << endl
        << "Total: " << bill << endl;
    

	return 0;
	
}