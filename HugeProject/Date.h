#pragma once
#include <iostream>
using namespace std;
class Date
{
private:
	int _dd, _mm, _yyyy;

public:
	Date();

	//Date(int y);
	Date(int d, int m, int y);
	void setDate(int day, int month, int year); //Reusability
	void setDate(int month, int year);
	void setDate(int month);
	//void setDate( int year);
	void showDate();
};

