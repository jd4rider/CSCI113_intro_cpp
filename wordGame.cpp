/*********************
	Jonathan Forrider
	CSCI 113
	02/20/2018
	Word Game

	Description:  A small story will be output to terminal based on user's input.
*********************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare variables
    string name, age, city, college, profession, animal, petName;

    //get user input
    cout <<  "Please input your name:" << endl;
    cin >> name;
    cout << "Please input your age:" << endl;
    cin >> age;
    cout << "Please input a city:" << endl;
    cin >> city;
    cout << "Please input a college:" << endl;
    cin >> college;
    cout << "Please input a profession:" << endl;
    cin >> profession;
    cout << "Please input an animal type:" << endl;
    cin >> animal;
    cout << "Please input a pet name:" << endl;
    cin >> petName;
    cout << endl;
    cout << "---------------------------------------------------------------------------" << endl;

    //output story
    cout << "There once was a person named " << name << " who lived in " << city 
        << ". At the age of" << endl << age << ", " << name << " went to college at " 
        << college << ". " << name << " graduated and went to work " << endl 
        << "as a " << profession << ". Then, " << name << " adopted a(n) " << animal 
        <<  " named " << petName << ". They " << endl << "both lived happily ever after!" << endl << endl;


	return 0;
	
}