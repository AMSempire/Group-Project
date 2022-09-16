//
// Created by Aaron Shabon on 4/20/22.
//
#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Course {
private:

    string _courseName;
    int _courseNumber;
    string _description;
    string _semesterTaken;
    string _deliveryMethod;
    string _status;
    char _gradeEarned;
    Course* _next;

public:
    //constructors

    Course();
    Course(string courseName, int courseNumber, string description, string semesterTaken,
           string deliveryMethod, string status, char gradeEarned);
    //Functions

    //getters
    string getName();
    int getNumber();
    string getDesc();
    string getSemester();
    string getMethod();
    string getStatus();
    char getGrade();
    Course* getNext();

    //setters
    void setName(string courseName);
    void setNumber(double courseNumber);
    void setDesc(string description);
    void setSemester(string semesterTaken);
    void setMethod(string deliveryMethod);
    void setStatus(string status);
    void setGrade(char gradeEarned);
    Course* setNext(Course* next);
    void setAll();

    //Display a course's information
    void displayCourse();
};


