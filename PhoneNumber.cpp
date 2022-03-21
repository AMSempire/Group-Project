#include "PhoneNumber.h"
#include <iostream>
#include <cstring>
#include<string>
using namespace std;

// empty constructor
PhoneNumber::PhoneNumber(){
  _phoneNumber= " ";
  _phoneType= " ";
}
PhoneNumber::PhoneNumber(string phoneNumber, string phoneType){
  _phoneNumber= phoneNumber;
  _phoneType= phoneType;

}

string PhoneNumber::getPhoneNumber() {
  return _phoneNumber;
}
string PhoneNumber::getPhoneType() {
  return _phoneType;
}

    string PhoneNumber::changePhoneNumber() {
        cout << "Please enter a new Number." << endl;
        cin >> _phoneNumber;
        return _phoneNumber;
    }
    string PhoneNumber::changePhoneType() {
        cout << "Please enter what type of phone it is" << endl;
        cin >> _phoneType;
        return _phoneType;
    }
