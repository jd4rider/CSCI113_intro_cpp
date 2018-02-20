/*********************
	Jonathan Forrider
	CSCI 113
	02/20/2018
	Math Tutor

	Description:  Random Number Flash Cards. Two Random numbers are generated, answer is displayed after return pressed.
*********************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	//seed random with time
    srand(time(NULL));
    
    //get two random numbers less then 1000
    int num1 = rand() % 1000;
    int num2 = rand() % 1000;

    //empty character to take "in" the return
    char press_enter;

    //print out random numbers
    cout << "Press Enter when you are ready for the answer" << endl;
    cout << setw(6) << right << fixed << num1 << endl;
    cout << "+" << setw(5) << right << fixed << num2 << endl;
    cout << "______" << endl;

    //take enter input
    cin.get(press_enter);
    cout << setw(6) << right << fixed << num1 + num2 << endl << endl;

	return 0;
	
}