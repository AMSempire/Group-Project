//
// Created by Aaron Shabon on 4/20/22.
//
#include "Course.h"
#include <iostream>
#include <fstream>
using namespace std;

//Constructors
Course::Course() {
    _courseName = " ";
    _courseNumber = 0;
    _description = " ";
    _semesterTaken = " ";
    _deliveryMethod = " ";
    _status = " ";
}

Course::Course(string courseName, int courseNumber, string description, string semesterTaken, string deliveryMethod,
               string status, char gradeEarned) {
    _courseName = courseName;
    _courseNumber = courseNumber;
    _description = description;
    _semesterTaken = semesterTaken;
    _deliveryMethod = deliveryMethod;
    _status = status;
    _gradeEarned = gradeEarned;
}
//setters

string Course::getName() {
    return _courseName;
}

int Course::getNumber() {
    return _courseNumber;
}

string Course::getDesc() {
    return _description;
}

string Course::getSemester() {
    return _semesterTaken;
}

string Course::getMethod(){
    return _deliveryMethod;
}
string Course::getStatus(){
    return _status;
}
char Course::getGrade(){
    return _gradeEarned;
}

Course *Course::getNext() {
    return _next;
}
//setters

void Course::setName(string courseName) {

    _courseName = courseName;

}

void Course::setNumber(double courseNumber) {

    _courseNumber = courseNumber;

}

void Course::setDesc(string description) {
    _description = description;

}
void Course::setSemester(string semesterTaken) {
    _semesterTaken = semesterTaken;

}

void Course::setMethod(string deliveryMethod){
    _deliveryMethod = deliveryMethod;

}
void Course::setStatus(string status){
    _status = status;

}
void Course::setGrade(char gradeEarned){
    _gradeEarned = gradeEarned;

}
void Course::setAll(){

}
Course* Course::setNext(Course* next){
    _next = next;
    return _next;
}

//display the course fully
void Course::displayCourse() {
    cout << "Course Name: " << _courseName << endl;
    cout << "Course Number: " << _courseNumber << endl;
    cout << "Description:  " << _description << endl;
    cout << "Semester: " << _semesterTaken << endl;
    cout << "Delivery Method: " << _deliveryMethod << endl;
    cout << "Status: " << _status << endl;
    cout << "Grade Earned: " << _gradeEarned << endl;
}
