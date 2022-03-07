#include <iostream>
using namespace std;
#include "Date.h"

Date::Date() {
	this->_dd = 1;
	this->_mm = 1;
	this->_yyyy = 2020;


}
Date::Date(int d, int m, int y) {
}
void Date::setDate(int day, int month, int year) {
	day = day;

	this->_dd = day;
	this->_mm = month;
	this->_yyyy = year;
}
void Date::showDate() {
	cout << "The month =" << _mm << "; the day="
		<< _dd << "; the year=" << _yyyy;

}
