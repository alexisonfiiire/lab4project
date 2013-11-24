#include <iostream>
#include <string>
using namespace std;

#ifndef PhysicalTests_HPP
#define PhysicalTests_HPP

class PhysicalTests {
public: PhysicalTests();		//Default constructor
		~PhysicalTests();	//Default destructor
		void urineTest();
		string urineColour;

};

#endif