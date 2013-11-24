#include <iostream>
#include "Base.hpp"
#include <string> 
using namespace std;

int main()
{
	int choice;
	int x = 1;
	Base Patient;

	while (x != 0)		//Will be in an infinite while loop unless x is 0;
	{

		cout << endl << "-|- TEST -|-" << endl
			<< "Choose a command: " << endl
			<< "1. " << endl
			<< "2. " << endl
			<< "3. " << endl
			<< "4. Exit" << endl;
		cin >> choice;		//Get choice from the user
		switch (choice)		//Initialize swith statement
		{
		case 1:
		{
				  
				  break;
		}
		case 2:
		{
				 
				  break;
		}
		case 3:
		{
				  Patient.Display();
				  break;
		}
		case 4:
		{
				  x = 0;
				  cout << "The program will now exit." << endl; //Terminates the program.
				  break;

		}
		default:
		{
				   cout << endl << "Unrecognized input." << endl << endl;
		}
		}
	}
	
}