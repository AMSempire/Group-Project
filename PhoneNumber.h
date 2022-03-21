#include <iostream>
#include<cstring>
#include<string>
using namespace std;
#pragma once
class PhoneNumber
{
private:
	// strings required
	string _phoneNumber, _phoneType;

public:
	PhoneNumber();// constructor
	PhoneNumber(string phoneNumber, string phoneType);
	~PhoneNumber(){
        cout << "Phone number destroyed.\n";
    }// destructor
	 //accessor functions
	string getPhoneNumber();
	string getPhoneType();
	
	

	//mutator functions
	string changePhoneNumber();
	string changePhoneType();
	
};
