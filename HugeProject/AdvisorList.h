//
// Created by Aaron Shabon on 5/3/22.
//

#pragma once
#include "Advisor.h"
#include <iostream>
using namespace std;

class AdvisorList{
private:

    Advisor* next{};
    Advisor* head;

    int count = 0;


public:
    AdvisorList();//constructor

    bool appendNode(Advisor* bundle); //Linked list functions
    bool searchNode(string name);
    bool deleteNode(string name);
    bool insertNode(Advisor* bundle);

    void display(); //display all classes
    void displayCount();
};


