#pragma once
#include<iostream>
#include<string>
using namespace std;
class Student
{
private: //name and userid number, other variables
double studentID;
string nameLast;
string nameFirst;
string nameMiddle;
string studentUserID;
public: //constructor destructor, accessor and mutators
Student();
~Student();
void printName();
void setName();
void getID();
}; 