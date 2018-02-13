/*********************
	Jonathan Forrider
	CSCI 113
	2/12/2018
	Test Average

	Description:  Find the average of 5 test scores.
*********************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
    double score1, score2, score3, score4, score5;

    cout << "Please enter 5 test scores with a space between each." << endl;
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    cout << setprecision(1) << fixed << (score1 + score2 + score3 + score4 + score5) / 5 << endl;

	return 0;
	
}