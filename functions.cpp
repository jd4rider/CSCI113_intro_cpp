/*********************
	Jonathan Forrider
	CSCI 113
	Date
	Name - Please Change

	Description:  Ipsum Dipsum Dolor
*********************/
#include <iostream>
using namespace std;

int sum(int, int, int);
int product(int, int, int);

int main()
{
	int a1, a2, a3;
	cout<<"Enter three integers: ";
	cin>>a1>>a2>>a3;
	cout<<"The sum of the integers is: "<<sum(a1, a2, a3)<<"\n";
	cout<<"The product of the integers is: "<<product(a1, a2, a3)<<"\n";
	return 0;
}
int sum(int a, int b, int c){
	return a + b + c;
}
int product(int a, int b, int c){
	return a * b * c;
}