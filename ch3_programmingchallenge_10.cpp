/*********************
	Jonathan Forrider
	CSCI 113
	2/12/2018
	Celsius to Fahrenheit

	Description:  Convert Celsius to Fahrenheit
*********************/
#include <iostream>
using namespace std;

int main()
{
	double celsius;

    cout << "Input the temperature in Celsius:" << endl;
    cin >> celsius;
    cout << "The temperature in Fahrenheit is: " << (9 * celsius) / 5 + 32 << endl;

	return 0;
	
}