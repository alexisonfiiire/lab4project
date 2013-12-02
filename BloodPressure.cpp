#include "BloodPressure.hpp"

BloodPressure::BloodPressure() //default constructor of BloodPressure class, inherits from base class
{
	cout << "-------------------------------------------------------------" << endl;
	cout << endl << "Welcome to Blood Pressure Test!" << endl << endl;
	BPstatus = -1;
	BPdias = -1;
	BPsys = -1;
	TimeBP = -1;
	IDAnnotate = " ";
	nameAnnotate = " ";
	occupationAnnotate = " ";

}


void BloodPressure::BloodPressureTest() //takes the blood pressure input from the user
{
	cout << "-------------------------------------------------------------" << endl;
	cout << endl << "** Blood Pressure ranges for all ages **" << endl //blood pressure ranges for all ages
		<< "High Blood Pressure....... Systolic Pressure >= 140 and Diastolic Pressure >= 90" << endl 
		<< "Normal blood Pressure........ Systolic Pressure <= 120 and Diastolic Pressure <=80" << endl 
		<< "If blood pressure is in between, the patient may be undergoing prehypertension" << endl << endl;
	cout << endl << "Enter systolic blood pressure: "; //takes systolic pressure from the user
	cin >> BPsys;
	cout << endl << "Enter diastolic blood pressure: "; //takes diastolic pressure from the user
	cin >> BPdias;
	time(&TimeBP); //records the time blood pressure was taken
	cout << "-------------------------------------------------------------" << endl;
	cout << endl << endl;
	if ((BPsys >= 140) || (BPdias >= 90)) //high blood pressure
	{
		BPstatus = 2;
	}
	else if ((BPsys <= 120) && (BPdias <= 80)) //normal blood pressure
	{
		BPstatus = 1;
	}
	else
	{
		BPstatus = 0; //Prehypertension
	}
}

void BloodPressure:: DisplayBloodPressureTest() //displays the result of blood pressure test
{
	cout << "-------------------------------------------------------------" << endl;
	cout << "\nPatient's blood pressure: " << endl
		<< "                 " << BPsys << "mm Hg systolic pressure " << endl
		<< "                 " << BPdias << "mm Hg diastolic pressure. " << endl << endl;
	if (BPstatus == 0)
	{
		string Temp = "Patient is undergoing prehypertension.";
		cout << Temp << endl;
		comments = comments + Temp; //add test details to comments
	}
	else if (BPstatus == 2)
	{
		string Temp = "Patient has high blood pressure.";
		cout << Temp << endl;
		comments = comments + Temp; //add test details to comments
	}
	else
	{
		string Temp = "Patient has normal blood pressure.";
		cout << Temp << endl;
		comments = comments + Temp; //add test details to comments
	}
	cout << "-------------------------------------------------------------" << endl << endl;
}

void BloodPressure::DisplayComments() //displays a summary with comments and annotations
{
	cout << endl << "-----------SUMMARY------------------------------------------" << endl;
	cout << "Name: " << firstname << " " << lastname << endl; //patient's name
	cout << "Age: " << age << endl; //patient's age
	cout << "NOTE: ** " << comments; //displays age
	cout << "\n\nPatient's blood pressure: " << endl //patient's blood pressure
		<< "                 " << BPsys << "mm Hg systolic pressure " << endl
		<< "                 " << BPdias << "mm Hg diastolic pressure. " << endl << endl;
	cout << "\n\nAnnotations by: " << nameAnnotate << "   ID:" << IDAnnotate << endl << annotation << endl; //display annotation details
	cout << endl << "Blood pressure test date: " << ctime(&TimeBP); //displays the time blood pressure was taken
	cout << "-------------------------------------------------------------" << endl;
}

void BloodPressure::Annotate() //asks the user if they would like to input anything
{
	char choice;
	string Temp;
	cout << "-------------------------------------------------------------" << endl;
	cout << endl << "Would you like to leave any comments? Type either 'y' or 'n': ";
	cin >> choice;
	if ((choice == 'y') || (choice == 'Y'))
	{
		cout << "Please type in your occcupation: "; //annotator's occupation
		cin >> occupationAnnotate;
		cout << "Name: "; //annotator's name
		cin >> nameAnnotate;
		cout << "ID: "; //annotator's ID
		cin >> IDAnnotate;
		cout << "Comments: "; //annotator's comments
		cin >> Temp; 
		annotation = annotation + Temp; //record annotation

	}
	else
	{

	}
}
