#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

//constructors and destructors
Student::Student() {
    _firstName = "bro";
    _midName = "brah";
    _lastName = "bri";
    _studentUserName = " bruh";
    _stuID = 1234;
    minor = "lol";
}

Student::Student(string firstName, string midName, string lastName,
                 string studentUserName, int ID, string _minor){
    _firstName = firstName;
    _midName = midName;
    _lastName = lastName;
    _studentUserName = studentUserName;
    _stuID = ID;
    minor = _minor;
}

//setters
string Student::setname() {

    cout << "Enter a new student name please.\n";
    cin >> _firstName >> _midName >> _lastName;
    cout << "\n";

    return _firstName;
}
string Student::setstudentUName() {
    cout<< "What is the students User Name"<<endl;
    cin>>_studentUserName;
    return _studentUserName;
}

int Student::setstuID() {
    cout<< "What is the students ID"<<endl;
    cin>>_stuID;
    return _stuID;
}

string Student::setfirstName() {
    cout<< "What is the students First Name"<<endl;
    cin>>_firstName;
    return _firstName;
}

string Student::setmidName() {
    cout<< "What is the students Middle Name"<<endl;
    cin>>_midName;
    return _midName;
}

string Student::setlastName() {
    cout<< "What is the students Last Name"<<endl;
    cin>>_lastName;
    return _lastName;
}

Semester Student::setMajor() {
    _start.changeMajor();
    return _start;
}

string Student::setMinor() {
    cout<< "What is the students minor"<<endl;
    cin>> minor;

    return minor;
}

Semester Student::setStatus() {
    _start.changeStatus();
    return _start;
}

MailingAddress Student::setMailingAddress() {
    _mailingAddress.changeStreetName();
    _mailingAddress.changeCity();
    _mailingAddress.changeState();
    _mailingAddress.changeZip();
    _mailingAddress.changeType();
    _mailingAddress.changeStreetNumber();
    return _mailingAddress;
}

Email Student::setEmail() {
    _email.setEmail();
    _email.setType();
    return _email;
}

PhoneNumber Student::setphoneNumber() {
    _phoneNumber.changePhoneNumber();
    _phoneNumber.changePhoneType();
    return _phoneNumber;
}

Date Student::setBDate() {
    int d, m, y;
    cout << "Type a day." << endl;
    cin >> d;
    cout << "Type a month." << endl;
    cin >> m;
    cout << "Type a year." << endl;
    cin >> y;

    _birthDate.setDate(d, m ,y);
    return _birthDate;
}

Date Student::setADate(){
    int d, m, y;
    cout << "Type a day." << endl;
    cin >> d;
    cout << "Type a month." << endl;
    cin >> m;
    cout << "Type a year." << endl;
    cin >> y;
    _acceptanceDate.setDate(d, m ,y);
    return _acceptanceDate;
}

Semester Student::setStart() {
    _start.changeSemester();
    return _start;
}
//getters

string Student::getstudentUName() {
    return _studentUserName;
}

int Student::getstuID() {
    return _stuID;
}

string Student::getname() {
    cout << _firstName << " " << _midName << " " << _lastName;
    return _firstName;
}


string Student::getfirstName() {
    return _firstName;
}

string Student::getmidName() {
    return _midName;
}

string Student::getlastName(){
    return _lastName;
}

Semester Student::getMajor(){
    _start.getMajor();
    return _start;
}

string Student::getMinor(){
    return minor;
}

Semester Student::getStatus() {
    _start.getStatus();
    return _start;
}

MailingAddress Student::getMailingAddress() {
    cout << _mailingAddress.getStreetNumber() << " ";
    cout <<_mailingAddress.getStreetName() << " ";
    cout << _mailingAddress.getCity() << " ";
    cout <<  _mailingAddress.getState() << " ";
    cout <<  _mailingAddress.getZip() << " ";
    cout <<  _mailingAddress.getType() << " ";
    return _mailingAddress;
}

Email Student::getEmail() {
    cout << _email.getEmail();
    return _email;
}

PhoneNumber Student::getphoneNumber() {
    _phoneNumber.getPhoneNumber();
    return _phoneNumber;
}

Date Student::getBDate() {
    _birthDate.showDate();
    return _birthDate;
}

Date Student::getADate() {
    _acceptanceDate.showDate();
    return _acceptanceDate;
}

Semester Student::getStart() {
    cout << _start.getSemester();
    return _start;
}

//displayer

void Student::displayStudent() {
    cout << "Name: " << getname() << endl;
    cout << "Student ID: " <<  getstuID() << endl;
    cout << "Username: " << getstudentUName() << endl;
    cout << "Status: " << _start.getStatus() << endl;
    cout << "Mailing Address: " << _mailingAddress.getStreetNumber() << " ";
    cout <<_mailingAddress.getStreetName() << " ";
    cout << _mailingAddress.getCity() << " ";
    cout <<  _mailingAddress.getState() << " ";
    cout <<  _mailingAddress.getZip() << " ";
    cout <<  _mailingAddress.getType() << " " << endl;
    cout << "Email: " << _email.getEmail();
    cout << "Phone Number: " << _phoneNumber.getPhoneNumber();
    cout << "Birth Date: " << " ";
    _birthDate.showDate();
    cout << "Acceptance Date: " << " ";
    _acceptanceDate.showDate();
    cout << "Semester: " << " ";
    cout << _start.getSemester();
    cout << "Major: " << " ";
    cout << _start.getMajor();
    cout << "Minor: " << " ";
    cout << minor;

}

