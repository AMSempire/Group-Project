#pragma once
#include<iostream>
#include<string>
#include "Date.h"
#include "Email.h"
#include "MailingAddress.h"
#include "PhoneNumber.h"
#include "Semester.h"

using namespace std;
class Student {
private:
    string _firstName, _midName, _lastName;
    string _studentUserName;
    int _stuID;
    string major, minor;
    string status;
    MailingAddress _mailingAddress;
    Email _email;
    PhoneNumber _phoneNumber;
    Date _birthDate;
    Date _acceptanceDate;
    Semester _start;

public:

    //constructors
    Student();
    Student(string firstName, string midName, string lastName , string studentUserName,
            int ID, string _minor);
    ~Student(){
        cout << "The information will be deleted.\n";
    }

    //setters
    string setname();
    string setstudentUName();
    int setstuID();
    string setfirstName();
    string setmidName();
    string setlastName();
    Semester setMajor();
    string setMinor();
    Semester setStatus();
    MailingAddress setMailingAddress();
    Email setEmail();
    PhoneNumber setphoneNumber();
    Date setBDate();
    Date setADate();
    Semester setStart();

    //getters
    string getname();
    string getstudentUName();
    int getstuID();
    string getfirstName();
    string getlastName();
    string getmidName();
    Semester getMajor();
    string getMinor();
    Semester getStatus();
    MailingAddress getMailingAddress();
    Email getEmail();
    PhoneNumber getphoneNumber();
    Date getBDate();
    Date getADate();
    Semester getStart();

    //display
    void displayStudent();
};