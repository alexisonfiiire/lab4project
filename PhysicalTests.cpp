#include "PhysicalTests.hpp"
#include <iostream>
#include <string>

void PhysicalTests::urineTest()
{
	cout << "\nPerforming a urine test..." << endl;
	int randomizer;
	string urineColour;
	randomizer = rand() % 3;
	if (randomizer == 1)
	{
		urineColour = "Dark colour";
		cout << endl << "Urine test result: " << urineColour << endl;
	}
	if (randomizer == 2)
	{
		urineColour = "Reddish colour";
		cout << endl << "Urine test result: " << urineColour << endl;
	}
	if (randomizer == 3)
	{
		urineColour = "Cloudy";
		cout << endl << "Urine test result: " << urineColour << endl;
	}
}
PhysicalTests::PhysicalTests()
{
	urineColour = "";
}

PhysicalTests::~PhysicalTests()
{
	urineColour = "";
}