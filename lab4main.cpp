#include <iostream>
#include <string> 
#include <ctime>
#include <time.h>
#include <stdio.h> 
#include "PhysicalTests.hpp"
#include "BloodPressure.hpp"
#include "Urine.hpp"
#include "VitalSigns.hpp"
using namespace std;
int main()
{
	
		VitalSigns VS;
		VS.HeartRate();
		VS.DisplayHeartTest();
		VS.RespiratoryRate();
		VS.DisplayRespiratoryTest();
		VS.TempTest();
		VS.DisplayTemperatureTest();
		VS.Annotate(); 
		VS.DisplayComments();
		
		BloodPressure BP;
		BP.BloodPressureTest();
		BP.DisplayBloodPressureTest();
		BP.Annotate();
		BP.DisplayComments();
		Urine U;
		U.UrineTest();
		U.DisplayUrineTest();
		U.Annotate();
		U.DisplayComments();
	
}