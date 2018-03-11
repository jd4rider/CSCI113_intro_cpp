/*********************
	Jonathan Forrider
	CSCI 113
	02/20/2018
	Monthly Payment

	Description:  Figure Monthly Payment based on input and interest rate calculation. Outputs report.
*********************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double loanAmount, rate, numPayments, paymentAmount, totalPaid, interestPaid;

    //Input Loan Amount, APR (Monthly Percentage rate calculated from APR), and number of Monthly Payments
    cout << "Please enter the Loan Amount:" << endl;
    cin >> loanAmount;
    cout << "Please enter the APR (Annual Percentage Rate):" << endl;
    cin >> rate;
    rate /= 12; //convert to monthly percentage
    rate /= 100; //convert from percentage to decimal
    cout << "Please enter the number of Monthly Payments:" << endl;
    cin >> numPayments;
    cout << endl;
    cout << "------------------------------------" << endl;

    //calculate monthly payment based on input
    paymentAmount = ((rate * pow((1 + rate), numPayments))/(pow((1 + rate), numPayments) - 1)) * loanAmount;

    //calculate total paid and interest paid
    totalPaid = paymentAmount * numPayments;
    interestPaid = totalPaid - loanAmount;

    //output report
    cout << setprecision(2) << setw(25) << left << fixed << "Loan Amount:" << '$' << setw(10) << right << fixed << loanAmount << endl;
    cout << setprecision(0) << setw(20) << left << fixed << "Monthly Interest Rate:" << setw(13) << right << fixed << rate * 100 << '%' << endl;
    cout << setw(20) << left << fixed << "Number of Payments:" << setw(16) << right << fixed << numPayments << endl;
    cout << setprecision(2) << setw(25) << left << fixed<< "Monthly Payment:" << '$' << setw(10) << right << fixed << paymentAmount << endl;
    cout << setw(25) << left << fixed << "Amount Paid Back:" << '$' << setw(10) << right<< fixed << totalPaid << endl;
    cout << setw(25) << left << fixed << "Interest Paid:" << '$' << setw(10) << right << fixed << interestPaid << endl << endl;

	return 0;
	
}