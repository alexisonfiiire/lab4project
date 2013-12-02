#include "Urine.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

Urine::Urine() //default constructory for Urine class, inherits from base
{
	cout << "-------------------------------------------------------------" << endl;
	cout << endl << "Welcome to Urine Test!" << endl << endl;
	UTstatus = -1;
	urineColour = -1;
	IDAnnotate = " ";
	nameAnnotate = " ";
	occupationAnnotate = " ";
}


void Urine::UrineTest() //takes urine test input from the user
{
	cout << "-------------------------------------------------------------" << endl;
	cout << endl << "Enter colour of Patient's urine: " << endl //options for input
		<< "1. Dark" << endl
		<< "2. Reddish" << endl
		<< "3. Cloudy" << endl
		<< "4. No colour" << endl;
	cin >> UTstatus;
	time(&TimeUT); //records the time urine test was performed
	cout << "-------------------------------------------------------------" << endl;
	cout << endl;
	if (urineColour == 1)
	{
		UTstatus = 1;
		//"Dark colour";
	}
	if (urineColour == 2)
	{
		UTstatus = 2;
		//"Reddish colour";
	}
	if (urineColour == 3)
	{
		UTstatus = 3;
		//"Cloudy";

	}
	if (urineColour == 0)
	{
		UTstatus = 0;
		//"Normal";

	}
}
void Urine::DisplayUrineTest() //displays a result of the urine test
{
	if (UTstatus == 1)
		{	
		string Temp;
		Temp = "Colour of Patient's urine: Dark. Patient needs to consume more fluids. \nPossibility of kidney not functioning properly.";
		cout << endl << Temp << endl;
		comments = Temp; //add test details to comments
		}
	else if (UTstatus == 2)
	{
		string Temp;
		Temp = "Colour of Patient's urine: Reddish. Blood in the urine.";
		cout << endl << Temp << endl;
		comments = Temp; //add test details to comments
	}
	else if (UTstatus == 3)
	{
		string Temp;
		Temp = "Colour of Patient's urine: Cloudy. Possibility of patient having Urinary Tract Infection.";
		cout << endl << Temp << endl;
		comments = Temp; //add test details to comments
	}
	else
	{
		string Temp;
		Temp = "Colour of Patient's urine: Normal";
		cout << endl << Temp << endl;
		comments = Temp; //add test details to comments
	}
	cout << "-------------------------------------------------------------" << endl;
		cout << endl;
	}
void Urine::DisplayComments()
{
	cout << endl << "-----------SUMMARY------------------------------------------" << endl;
	cout << "Name: " << firstname << " " << lastname << endl; //patient's name
	cout << "Age: " << age << endl << endl; //patient's age
	cout << "NOTE: ** " << comments; //display comments
	cout << "\n\nAnnotations by: " << nameAnnotate << "   ID:" << IDAnnotate << endl << annotation << endl; //display annotation details
	cout << endl << endl <<"Urine test date: " << ctime(&TimeUT); //display time urine test was performed
	cout << "-------------------------------------------------------------" << endl;
}


void Urine::Annotate()
{
	char choice;
	string Temp;
	cout << endl << "Would you like to leave any comments? Type either 'y' or 'n': ";
	cin >> choice;
	if ((choice == 'y') || (choice == 'Y'))
	{
		cout << "Please type in your occcupation: ";
		cin >> occupationAnnotate;
		cout << "Name: ";
		cin >> nameAnnotate;
		cout << "ID: ";
		cin >> IDAnnotate;
		cout << "Comments: ";
		cin >> Temp;
		annotation = annotation + Temp;

	}
	else
	{

	}
}
