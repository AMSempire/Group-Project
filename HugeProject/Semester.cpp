#include "Semester.h"
#include <iostream>
#include <string>
using namespace std;
// constructor
Semester::Semester() {
	_semester = " ";
	_major = " ";
	_year = " ";
	_status = " ";
	}
Semester::Semester(string semester, string major, string year, string status)
	{
	_semester = semester;
	_major = major;
	_year = year;
	_status = status;
	}
    //accessor functions 

    string Semester::getSemester(){
        return _semester;
    }
    string Semester::getMajor() {
        return _major;
    }
    string Semester::getYear() {
        return _year;
    }
    string Semester::getStatus() {
        return _status;
    }
    

    string Semester::changeSemester() {//mutator functions
        cout << "Please enter a new Semester" << endl;
        cin >> _semester;
        return _semester;
    }
    string Semester::changeMajor() {
        cout << "Please enter a new Major." << endl;
        cin >> _major;
        return _major;
    }
    string Semester::changeYear() {
        cout << "Please your new Year" << endl;
        cin >> _year;
        return _year;
    }
    string Semester::changeStatus() {
        cout << "Please enter a new Status" << endl;
        cin >> _status;
        return _status;
    }
    