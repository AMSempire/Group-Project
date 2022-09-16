//
// Created by Aaron Shabon on 2/23/22.
//
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Email {
private:
    string _email, _type;
public:
    Email();

    Email(string email, string type);
    string getEmail();
    string getType();
    string setEmail();
    string setType();
};

