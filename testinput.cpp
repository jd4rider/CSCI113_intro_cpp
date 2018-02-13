/*********************
	Jonathan Forrider
	CSCI 113
	02/09/2018
	Test Input

	Description:  Testing different versions of "cin" multiple variables.
	
	Note to Dr. Tom Gallagher,
	
	I see how they would say that cin.get(length, width, height) is correct, 
	but there was no implicit instruction that 'Enter' did not have to be
	struck after the entering of the variables.
	
	When I do test using cin.get(length, width, height) below, it throws an error.  
	
	Sincerely,
	
	Jonathan
*********************/
#include <iostream>
using namespace std;

int main()
{
	
	
	int length, width, height;
	
	cout << "Enter Length, Width, Height as whole numbers" << endl;
	
	cin >> length >> width >> height;
	
	cout << "Length, Width, Height: " << length << " " << width << " " << height << endl;
	
	//If using the below code as the quiz is saying, it errors out.
	
	//cout << "Now enter them and there is not need to press 'Enter' (Use different numbers from above)" << endl;
	
	//cin.get(length, width, height);
	
	//cout << "Length, Width, Height: " << length << " " << width<< " " << height<< endl;
	
	return 0;
	
}