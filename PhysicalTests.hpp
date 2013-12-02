#include <string>
#include <iostream>
#include <ctime>
#include <time.h>
#include <stdio.h> 
#pragma warning(disable:4996) //enable ctime
using namespace std;
#ifndef PhysicalTests_HPP
#define PhysicalTests_HPP

class PhysicalTests  { //Base class
public: 
		PhysicalTests(); //base class contructor
		string comments; //comments
		string annotation; //annotation

protected:
	int age; //patient's age
	char gender; //patient's gender
	string SIN; //patient's social insurance number
	string firstname; //patient's firstname
	string lastname; //patient's lastname

};

#endif
