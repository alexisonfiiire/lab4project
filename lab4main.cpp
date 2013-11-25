#include <iostream>
#include "Base.hpp"
#include <string> 
#include <ctime>
#include <time.h>
#include <stdio.h> 
using namespace std;
#pragma warning(disable:4996) //enable ctime
int main()
{
	int choice;
	int x = 1;
	
	string firstname, lastname;
	int age;
	Base Patient;



	cout << "Patient's information" << endl
		<< "First Name: ";
	cin >> firstname;
	cout << "Last Name: ";
	cin >> lastname;
	cout << "Patient's age:";
	cin >> age;

	while (x != 0)		//Will be in an infinite while loop unless x is 0;
	{
	

		cout << endl << "-|- TEST -|-" << endl
			<< "Choose a command: " << endl
			<< "1. " << endl
			<< "2. " << endl
			<< "3. Conduct physical tests" << endl
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
				  int physicaltestchoice;
				  Patient.examineUrineTest();
				  time_t TimeUT;
				  time(&TimeUT);

				  Patient.examineHeartTest(age);
				  time_t TimeHT;
				  time(&TimeHT);

				  Patient.examineRespiratoryTest(age);
				  time_t TimeRT;
				  time(&TimeRT);

				  Patient.examineBloodPressureTest();
				  time_t TimeBP;
				  time(&TimeBP);
				  
				  Patient.examineTempTest();
				  time_t TimeTT;
				  time(&TimeTT);

				  cout << "\n\nThe following Physical Tests have been performed: " << endl
					  << "* Urine Test......................" << endl
					  << "* Heart Rate......................" << endl
					  << "* Respiratory Rate................" << endl
					  << "* Blood Pressure.................." << endl
					  << "* Body Temperature................" << endl;
				  int y = 1;
					
					while (y != 0)		//Will be in an infinite while loop unless x is 0;
					{
						int choice2;
						cout << "\n\n" << endl
							<< "Choose a test and display its results and time: " << endl
							<< "1. Urine Test " << endl
							<< "2. Heart Test" << endl
							<< "3. Blood Pressure Test" << endl
							<< "4. Respiratory Rate" << endl
							<< "5. Body temperature" << endl
							<< "6. Print all results" << endl
							<< "7. Exit Physical Test" << endl;
						
						cin >> choice2;		//Get choice from the user
						switch (choice2)		//Initialize swith statement
						{
						case 1:
							{
								  cout << "--------------------------------------------------------------" << endl;
								  Patient.DisplayUrineTest();
								  printf( "\n\nUrine test date and time: %s", ctime(&TimeUT));
								  cout << "--------------------------------------------------------------" << endl;
								  break;
						}
						case 2:
						{
								  cout << "--------------------------------------------------------------" << endl;
								  Patient.DisplayHeartTest();
								  printf( "\nHeart test date and time: %s", ctime(&TimeHT));
								  cout << "--------------------------------------------------------------" << endl; 
								  break;
						}
						case 3:
						{	
								  cout << "--------------------------------------------------------------" << endl;
								  Patient.DisplayBloodPressureTest();
								  printf( "\nBlood pressure test date and time : %s", ctime(&TimeBP));
								  cout << "--------------------------------------------------------------" << endl; 
								  break;
						}
						case 4:
						{	
								  cout << "--------------------------------------------------------------" << endl; 
								  Patient.DisplayRespiratoryTest();
								  printf( "\nRespiratory test date and time : %s", ctime(&TimeRT));
								  cout << "--------------------------------------------------------------" << endl;
								  break;
						}
						case 5:
						{
								  cout << "--------------------------------------------------------------" << endl;
								  Patient.DisplayTempTest();
								  printf( "\nBody temperature test date and time : %s", ctime(&TimeTT));
								  cout << "--------------------------------------------------------------" << endl;
								  break;
						}
						case 6:
						{
								  cout << "--------------------------------------------------------------" << endl;
								  cout << "Patient's full name: " << firstname << " " << lastname << endl;
								  cout << "Patient's age: " << age << endl;
								  Patient.DisplayUrineTest();
								  Patient.DisplayHeartTest();
								  Patient.DisplayBloodPressureTest();
								  Patient.DisplayRespiratoryTest();
								  Patient.DisplayTempTest();
								  cout << "--------------------------------------------------------------" << endl;
								  break;
						}
						case 7:
						{
								  y = 0;
								  cout << "Exiting Physical Test section." << endl; //Terminates the switch statement.
								  break;
						}
						default:
						{
								   cout << endl << "Unrecognized input." << endl << endl;
						}
						}
					}
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