#include "VitalSigns.hpp"

VitalSigns::VitalSigns() //default constructor for vital signs, inherits from Base class
{
	cout << "-------------------------------------------------------------" << endl;
	cout << endl << "Welcome to Vital Signs Test!" << endl << endl;
	HRstatus = -1;
	RRstatus = -1;
	TTstatus = -1;
	HR = -1;
	TT = -1;
	RR = -1;
	TimeRR = -1;
	TimeHR = -1;
	TimeTT = -1;
	IDAnnotate = " ";
	nameAnnotate = " ";
	occupationAnnotate = " ";
}


void VitalSigns::HeartRate() //takes the heart rate from the user
{

	cout << "-------------------------------------------------------------" << endl;
	cout << endl << "** Normal Heart rate ranges **" << endl //list of normal heart rate ranges
		<< "Ages 1 to 11 years old ................ 70 - 120" << endl
		<< "Ages 12 and up ........................ 60 - 100" << endl << endl;
	cout << endl << "Enter Patient's heart rate: ";
	cin >> HR;
	cout << "-------------------------------------------------------------" << endl;
	cout << endl << endl;
	time(&TimeHR);
	//source: http://www.healthlinkbc.ca/kb/content/special/abo2987.html
	if ((age >= 1) && (age <= 11)) // if patient is between age 1 and 11..
	{
		if ((HR >= 70) && (HR <= 120))
			HRstatus = 1;
		else if (HR >120)	
			HRstatus = 2;
		else
			HRstatus = 0;
	}

	else //for 12 and up
	{
		if ((HR >= 60) && (HR <= 100))
			HRstatus = 1;
		else if (HR > 100)
			HRstatus = 2;
		else
			HRstatus = 0;

	}


}

void VitalSigns::RespiratoryRate() //takes the respiratory rate from the user
{
//source: http://www.healthlinkbc.ca/kb/content/special/abo2987.html
	cout << "-------------------------------------------------------------" << endl;
	cout << endl << "** Normal Respiratory rate ranges **" << endl //list of normal respiratory rate changes
		<< "Ages 1 to 11 years old ................ 12 - 20" << endl
		<< "Ages 12 and up ........................ 12 - 18" << endl << endl;
	cout << endl << "Enter Patient's respiratory rate: ";
	cin >> RR;
	cout << endl << endl;
	cout << "-------------------------------------------------------------" << endl;
	time(&TimeRR);
	if ((age >= 1) && (age <= 11)) //if patient's age is between 1 and 11..
	{
		if ((RR >= 12) && (RR <= 20))
			RRstatus = 1;
		else if (RR >20)
			RRstatus = 2;
		else
			RRstatus = 0;

	}

	else //for 12 and up
	{
		if ((RR >= 12) && (RR <= 18))
			RRstatus = 1;
		else if (RR > 18)
			RRstatus = 2;
		else
			HRstatus = 0;

	}
}


void VitalSigns::TempTest() //takes body temperature from the user
{

	cout << "-------------------------------------------------------------" << endl;
	cout << endl << "** Normal Body Temperature ranges (in Celsius) **" << endl //list of normal body temperature ranges
		<< "Applies to all ages ................ 36.5 - 37.2 degrees Celsius"<< endl << endl;
	cout << endl << "Enter Patient's body temperature: ";
	cin >> TT;
	cout << endl << endl;
	cout << "-------------------------------------------------------------" << endl;
	time(&TimeTT);
	//source: http://www.hopkinsmedicine.org/healthlibrary/conditions/cardiovascular_diseases/vital_signs_body_temperature_pulse_rate_respiration_rate_blood_pressure_85,P00866/
	if ((TT >= 36.5) && (TT <= 37.2)) //if statement to evaluate if body temperature is high, low or normal
		TTstatus = 1;
	else if (TT >37.2)
		TTstatus = 2;
	else
		TTstatus = 0;
}


void VitalSigns::DisplayHeartTest() //displays the result of heart test
{
	cout << "\nPatient's Heart rate: " << HR << " beats per minute." << endl;
	if (HRstatus == 0)
	{
		string Temp1 = "Patient has low heart rate. "; //add test details to comments
		cout << Temp1 << endl << endl;
		string Temp2 = "Keep in mind that athletes, such as runners, who do a lot of cardiovascular conditioning, may have heart rates near 40 beats per minute and experience no problems. ";
		cout << Temp2 << endl << endl;
		comments = comments + Temp1 + Temp2;
	}
	else if (HRstatus == 2)
	{
		string Temp1 = "Patient has high heart rate. "; //add test details to comments
		cout << Temp1 << endl;
		if ((gender == 'f') || (gender == 'F'))
		{
			string Temp2 = "Patient has high heart rate. However, keep in mind that females generally have faster heart rates than males. ";
			cout << Temp2 << endl << endl;
			comments = comments + Temp1 + Temp2; //add test details to comments
			//source: http ://www.hopkinsmedicine.org/healthlibrary/conditions/cardiovascular_diseases/vital_signs_body_temperature_pulse_rate_respiration_rate_blood_pressure_85,P00866/
		}
		else
		{

		}
	}
	else
	{
		string Temp = "Patient has normal heart rate. ";
		cout << Temp << endl;
		comments = comments + Temp; //add test details to comments
	}
}


void VitalSigns::DisplayRespiratoryTest() //display the result of respiratory test
{
	cout << "\nPatient's Respiratory rate: " << RR << " breaths per minute." << endl;
	if (RRstatus == 0)
	{
		string Temp = "Patient has low respiratory rate. ";
		cout << Temp << endl;
		comments = comments + Temp; //add test details to comments
	}
	else if (RRstatus == 2)
	{
		string Temp = "Patient has high respiratory rate. ";
		cout << Temp << endl;
		comments = comments + Temp; //add test details to comments

	}
	else
	{
		string Temp = "Patient has normal respiratory rate. ";
		cout << Temp << endl;
		comments = comments + Temp; //add test details to comments
	}
}

void VitalSigns::DisplayTemperatureTest() //displays the result of temperature test
{
	cout << "\nPatient's body temperature: " << TT << " celsius." << endl << endl;
	if (TTstatus == 0)
	{
		string Temp1 = "Patient has low body temperature. ";
		cout << Temp1 << endl;
		comments = comments + Temp1; //add test details to comments
	}
	else if (TTstatus == 2)
	{
		string Temp1 = "Patient has high body temperature. ";
		cout << Temp1 << endl;
		comments = comments + Temp1;//add test details to comments
		if ((gender == 'F') || (gender = 'f'))
		{
			string Temp = "Patient has high temperature. It is possible that the patient is undergoing menstrual cycle. During menstrual cycle, normal ranges for body temperature is slightly higher. ";
			cout << Temp << endl << endl;
			//source: http ://www.hopkinsmedicine.org/healthlibrary/conditions/cardiovascular_diseases/vital_signs_body_temperature_pulse_rate_respiration_rate_blood_pressure_85,P00866/
			comments = comments + Temp; //add test details to comments
		}
		else
		{

		}
	}
	else
	{
		string Temp1 = "Patient has normal body temperature. ";
		cout << Temp1 << endl;
		comments = comments + Temp1; //add test details to comments
	}
}

void VitalSigns::DisplayComments() //display summary with comments and annotations
{
	
	cout << endl << "-----------SUMMARY------------------------------------------" << endl;
	cout << "Name: " << firstname << " " << lastname << endl; //patient's name
	cout << "Age: " << age << endl << endl;		//patient's age
	cout << "\nPatient's Heart rate: " << HR << " beats per minute." << endl; //heart rate
	cout << "\nPatient's Respiratory rate: " << RR << " breaths per minute." << endl; //respiratory rate
	cout << "\nPatient's body temperature: " << TT << " celsius." << endl << endl;	//body temperature
	cout << "NOTE: **" << comments << endl << endl; //display comments
	cout << "Annotations by: " << nameAnnotate << "   ID:" << IDAnnotate << endl << annotation << endl; //display annotation details
	cout << endl << endl <<"Heart rate test date: " << ctime(&TimeHR); //display time heart rate was taken
	cout << "Respiratory test date:" << ctime (&TimeRR); //display time respiratory rate was taken
	cout << "Temperature test date: " << ctime(&TimeTT); //display time body temperature was taken
	cout << "-------------------------------------------------------------" << endl;
}

void VitalSigns::Annotate() //asks the user if they would like to input anything
{
	char choice;
	string Temp;
	cout << "-------------------------------------------------------------" << endl;
	cout << endl << "Would you like to leave any comments? Type either 'y' or 'n': ";
	cin >> choice;
	if ((choice == 'y') || (choice == 'Y'))
	{
		cout << "Please type in your occcupation: ";
		cin >> occupationAnnotate;
		cout << "Name: ";
		cin >> nameAnnotate;
		cout << "ID: ";
		cin >> IDAnnotate;
		cout << "Comments: ";
		cin >> Temp;
		annotation = annotation + Temp; //record annotation details
	
	}
	else
	{
		//do nothing if the user does not want to annotate
	}
}