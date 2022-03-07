#include "PhoneNumber.h"
#include <iostream>
#include <cstring>
#include<string>
using namespace std;

// empty constructor
PhoneNumber(){
  _phoneNumber= " ";
  _phoneType= " ";
}
PhoneNumber(string phoneNumber, string phoneType){
  _phoneNumber= phoneNumber;
  _phoneType= phoneType;
}
~PhoneNumber(){
  cout<<"This destroys the object phone number"<<endl;
}
string PhoneNumber::getPhoneNumber {
  return _phoneNumber;
}
string PhoneNumber::getPhoneType {
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
