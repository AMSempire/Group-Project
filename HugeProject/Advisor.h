//
// Created by Aaron Shabon on 5/2/22.
//

#pragma once
#include "OfficeHours.h"
#include "Student.h"
#include <iostream>
#include "StudentList.h"
using namespace std;


class Advisor {

private:

    string _fName, _mName, _lName;
    string _title;
    string _department;
    string _officeLocation;
    double _officeNumber;
    string _email;
    OfficeHours * hours = new OfficeHours;
    Advisor* next;
    StudentList studentlists;

public:

    Advisor();
    Advisor(string fname, string mname, string lname,
            string title, string department, string officeLocation,
            double officeNum, string email, OfficeHours* p);

    string getfName();
    string getmName();
    string getlName();
    string getTitle();
    string getDepart();
    string getOfficeLoc();
    double getOfficeNum();
    string getEmail();
    OfficeHours* getOfficeHours();
    Advisor* getNext();

    void setfName(string fname);
    void setmName(string mname);
    void setlName(string lname);
    void setTitle(string title);
    void setDepart(string department);
    void setOfficeLoc(string officeLoc);
    void setOfficeNum(double officeNum);
    void setOfficeHours(OfficeHours* p);
    void setEmail();


    void setNext(Advisor* nexto);


    void addStudent(Student* c);
    void deleteStudent(int num);
    void searchStudent(int num);
    void insertStudent(Student*c);


    void display();
    void displayStudent();

};


