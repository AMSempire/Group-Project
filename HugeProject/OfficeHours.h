//
// Created by Aaron Shabon on 5/2/22.
//
#pragma once
#include <iostream>
using namespace std;


class OfficeHours {
private:

string _day;
string _startTime, _endTime;
public:

    OfficeHours();
    OfficeHours(string day, string startTime, string endTime);


   string getDay();
    string getStart(); //getters
    string getEnd();

    void setDay(string day);
    void setStart(string start);
    void setEnd(string end);

    void display();

};


