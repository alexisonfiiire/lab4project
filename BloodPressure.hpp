#include <iostream>
#include <string>
#include "PhysicalTests.hpp"
using namespace std;

#ifndef BloodPressure_HPP
#define BloodPressure_HPP

class BloodPressure : public PhysicalTests { //base class PhysicalTests
public: BloodPressure();		//Default constructor
		void DisplayBloodPressureTest(); //displays the result of blood pressure test
		void BloodPressureTest(); //asks the user for blood pressure input
		void DisplayComments(); //display summary with comments and annotations
		void Annotate(); //asks the user if they would like to input anything
private:
		int BPstatus; //status of patient's blood presssure
		int BPdias; //patient's diastolic pressure
		int BPsys; //patient's systolic pressure
		time_t TimeBP; //time blood pressure was taken
		string occupationAnnotate; //occupation of user who annotated
		string nameAnnotate; //name of user who annotated
		string IDAnnotate; //ID of user who annotated
};

#endif