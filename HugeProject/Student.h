#pragma once
#include<iostream>
#include<string>
#include "Date.h"
#include "Email.h"
#include "MailingAddress.h"
#include "PhoneNumber.h"
#include "Semester.h"
#include "Course.h"
#include "CourseList.h"

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
    string semesterName;
    CourseList courseWork;
    Student* next;


public:

    //constructors
    Student();
    Student(string firstName, string midName, string lastName , string studentUserName,
            int ID, string _major, string _minor, string _status);

    //setters
    string setname();
    string setstudentUName();
    int setstuID();
    string setfirstName();
    string setmidName();
    string setlastName();
    void  setMajor();
    string setMinor();
    void setStatus();
    MailingAddress setMailingAddress();
    Email setEmail();
    PhoneNumber setphoneNumber();
    Date setBDate();
    Date setADate();
    Semester setStart();
    void setSemester();


    //linked list functionality
    void setNext(Student* _next);
    void addCourse(Course* c);
    void deleteCourse(int num);
    void searchCourse(int num);
    void insertCourse(Course*c);



    //getters
    string getname();
    string getstudentUName();
    int getstuID();
    string getfirstName();
    string getlastName();
    string getmidName();
    string getMajor();
    string getMinor();
    string getStatus();
    MailingAddress getMailingAddress();
    Email getEmail();
    PhoneNumber getphoneNumber();
    Date getBDate();
    Date getADate();
    Semester getStart();
    Student* getNext();
    string getSemesterName();

    //display
    void displayStudent();

    void displayCourses();
};

