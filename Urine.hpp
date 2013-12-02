#include <iostream>
#include <string>
#include "PhysicalTests.hpp"
using namespace std;

#ifndef Urine_HPP
#define Urine_HPP

class Urine : PhysicalTests{ //inherits from PhysicalTests class
public: Urine();		//Default constructor
		void UrineTest(); //aks the user for urine test input
		void DisplayUrineTest(); //displays the result of urine test
		void DisplayComments(); //display a summary with comments and annotations
		void Annotate(); //aks the user if they would like to annotate
private:
		int UTstatus; //status of patient's urine condition
		int urineColour; //colour of patient's urine
		time_t TimeUT; //time urine test was taken
		string occupationAnnotate; //occupation of user who annotated
		string nameAnnotate; //name of user who annotated
		string IDAnnotate; //ID of user who annotated
};

#endif