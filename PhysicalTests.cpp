#include "PhysicalTests.hpp"

using namespace std;

PhysicalTests::PhysicalTests() //get patient info from the user
{
	comments = " ";
	annotation = " ";
	cout << "Enter Patient's First name: ";
	cin >> firstname;
	cout << "Enter Patient's last name: ";
	cin >> lastname;
	cout << "Social Insurance Number: ";
	cin >> SIN;
	cout << "Enter Patient's age: ";
	cin >> age;
	cout << "Patient's gender(Type 'M' or 'F'): ";
	cin >> gender;
}

