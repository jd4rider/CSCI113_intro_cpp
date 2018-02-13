/*********************
	Jonathan Forrider
	CSCI 113
	Date
	Name - Please Change

	Description:  Replicate Coin Toss
*********************/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	
    srand(time(NULL));


    cout <<hex<< RAND_MAX << endl;

    cout << rand() << "\t"
         << rand() << "\t"
         << rand() << "\t"
         << rand() << "\t"
         << rand() << "\t" << endl;

	return 0;
	
}