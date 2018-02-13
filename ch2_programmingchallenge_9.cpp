/*********************
	Jonathan Forrider
	CSCI 113
	2/5/2018
    Averages of Values

    Description:  This program determines the byte size of different variables. q.9
*********************/
#include <iostream>
using namespace std;

int main()
{
	char character;
    int integer;
    float point;
    double precise;



    cout << "char byte size: " << sizeof(character) << endl
        << "int byte size: " << sizeof(integer) << endl
        << "float byte size: " << sizeof(point) << endl
        << "double byte size: " << sizeof(precise) << endl;
    

	return 0;
	
}