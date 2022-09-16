//
// Created by Aaron Shabon on 5/2/22.
//

#include "OfficeHours.h"

OfficeHours::OfficeHours() = default;


OfficeHours::OfficeHours(string day, string startTime, string endTime) {

    _day = day;
    _startTime = startTime;
    _endTime = endTime;
}

string OfficeHours::getDay() {
    return _day;
}

string OfficeHours::getStart() {
    return _startTime;
}

string OfficeHours::getEnd() {
    return _endTime;
}

void OfficeHours::setDay(string day) {
    _day = day;
}

void OfficeHours::setStart(string start) {
    _startTime = start;
}

void OfficeHours::setEnd(string end) {
    _endTime = end;
}

void OfficeHours::display(){

    cout << "Day: " << _day << endl;
    cout << "Start Time: " << _startTime << endl;
    cout << "End Time: " << _endTime << endl;

}