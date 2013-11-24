#include <iostream>
#include <string>
#include "Bloodtests.hpp"
#include "MedicalImages.hpp"
#include "PhysicalTests.hpp"
#include <cstdlib>

using namespace std;


#ifndef Base_HPP
#define Base_HPP

class Base {
public: Base();		//Default constructor
		~Base();	//Default destructor
		void Display();
		//void Examine();
		
		BloodTests *class1;
		MedicalImages *class2;
		PhysicalTests class3;
};

#endif