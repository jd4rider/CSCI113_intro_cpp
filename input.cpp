/*********************
	Jonathan Forrider
	CSCI 113
	Date
	Name - Please Change

	Description:  Ipsum Dipsum Dolor
*********************/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream oF1;
	int i;
	
	string filename;
	
	cout<<"Enter a filename: ";
	cin>>filename;
	
	oF1.open(filename);
	if (oF1) {
		oF1<<"Tab Delimited Text File\n";
		for(i=0;i<=100;i++)
			oF1<<i<<'\t';
		oF1.close();
		cout<<"File Creation successful!"<<endl;
	}
	else
		cout<<"Unable to open file";
	return 0;
	
}