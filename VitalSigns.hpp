#include <iostream>
#include <string.h> //enables declaration of strings
#include "PhysicalTests.hpp"
using namespace std;
#ifndef VitalSigns_HPP
#define VitalSigns_HPP

class VitalSigns: public PhysicalTests {
public: VitalSigns();		//Default constructor
		void HeartRate(); //Asks for the hearrate
		void RespiratoryRate();	//asks for the respiratory rate
		void TempTest();	//asks for body temperature
		void DisplayHeartTest(); //displays the results of the heart test
		void DisplayRespiratoryTest(); //displays the result of the respiratory test
		void DisplayTemperatureTest(); //displays the result of temperature test
		void DisplayComments(); //displays a summary with comments and annotations
		void Annotate(); //asks the user if they want to leave an annotation

private:
		int HRstatus; //status of patient's blood heart rate
		int RRstatus; //status of patient's respiratory rate
		int TTstatus; //status of patient's body temperature
		int HR; //patient's heart rate
		int RR; //patient's respiratory rate
		int TT; //patient's body temperature
		time_t TimeHR; //time hear rate taken
		time_t TimeTT; //time body temperature taken
		time_t TimeRR; //time respiratory rate was taken
		string occupationAnnotate; //occupation of user who have annotated
		string nameAnnotate; //name of user who have annotated
		string IDAnnotate; //ID of user who have annotated
		
};

#endif