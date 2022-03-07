#include <iostream>
#include<cstring>
#include<string>
using namespace std;
#pragma once
class Semester
{
private:
	// strings required
	string _semester, _major, _year, _status;

public:
	Semester();// constructor
	Semester(string semester, string major, string year, string status);
	~Semester();// destructor
	 //accessor functions
	string getSemester();
	string getMajor();
  string getYear();
string getStatus();
	

	//mutator functions
	string changeSemester();
	string changeMajor();
string changeYear();
string changeStatus();

};