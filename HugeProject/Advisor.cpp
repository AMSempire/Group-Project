//
// Created by Aaron Shabon on 5/2/22.
//

#include "Advisor.h"

Advisor::Advisor() = default;


Advisor::Advisor(string fname, string mname, string lname, string title, string department, string officeLocation,
                 double officeNum, string email, OfficeHours *p) {

    _fName = fname;
    _mName = mname;
    _lName = lname;
    _title = title;
    _department = department;
    _officeLocation = officeLocation;
    _officeNumber = officeNum;
    _email = email;
    hours = p;
}

string Advisor::getfName() {
    return _fName;
}

string Advisor::getmName() {
    return _mName;
}

string Advisor::getlName() {
    return _lName;
}

string Advisor::getTitle() {
    return _title;
}

string Advisor::getDepart() {
    return _department;
}

string Advisor::getOfficeLoc() {
    return _officeLocation;
}

double Advisor::getOfficeNum() {
    return _officeNumber;
}

OfficeHours *Advisor::getOfficeHours() {
    return hours;
}

string Advisor::getEmail(){
    return _email;
}

Advisor* Advisor::getNext() {
    return next;
}

void Advisor::setfName(string fname){
    _fName = fname;
}
void Advisor::setmName(string mname){
    _mName = mname;
}
void Advisor::setlName(string lname){
    _lName = lname;
}
void Advisor::setTitle(string title){
    _title = title;
}
void Advisor::setDepart(string department){
    _department = department;
}
void Advisor::setOfficeLoc(string officeLoc){
    _officeLocation = officeLoc;
}
void Advisor::setOfficeNum(double officeNum){
    _officeNumber = officeNum;
}
void Advisor::setOfficeHours(OfficeHours* p){
    hours = p;
}

void Advisor::setNext(Advisor* nexto){
    next = nexto;
}

void Advisor::setEmail() {
    cout << "What is the advisors email?" << endl;
    string email;
    cin >> email;
    _email = email;
}

void Advisor::display(){

    cout << "Advisor Name:" << " " << _title << " " << _fName << " " << _mName << " " << _lName << endl;
    cout << "Advisor Department: " << _department << endl;
    cout << "Office Location and Number: " << _officeLocation << " " << _officeNumber;
    cout << "Office Hours: "; hours->display();

}

void Advisor::addStudent(Student* c){
studentlists.appendNode(c);
}
void Advisor::deleteStudent(int num){
studentlists.deleteNode(num);
}
void Advisor::searchStudent(int num){
studentlists.searchNode(num);
}
void Advisor::insertStudent(Student*c){
    studentlists.insertNode(c);
}

void Advisor::displayStudent() {
        studentlists.display();
}