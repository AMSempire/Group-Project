//
// Created by Aaron Shabon on 2/23/22.
//
#include "Email.h"
#include <iostream>
#include <string>
using namespace std;

Email::Email() {
    _email = " ";
    _type = " ";
}

Email::~Email() {
cout << "This will delete the email object. " << endl;
}

Email::Email(string email, string type) {
_email = email;
_type = type;
}
 string Email::getEmail() {
 return _email;
}

string Email::getType() {
return _type;
}

string Email::setEmail(string _email) {
    cout<< "What is the email name?" << endl;
    cin >> _email;
    return _email;
}

string Email::setType(string _type) {
    int num;
    cout << "What is the email type? Press 1 for University and 2 for Personal" << endl;
    cin >> num;

    switch(num){
        case 1: _type = "University";
        break;
        case 2: _type = "Personal";
        break;
        default:
            cout << "This is an invalid number. Please enter 1 or 2" << endl;
            cin >> num;
    }
    return _type;
}
