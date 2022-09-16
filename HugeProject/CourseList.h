//
// Created by Aaron Shabon on 4/27/22.
//
#pragma once
#include "Course.h"
#include <iostream>
using namespace std;

class CourseList {
private:
    Course* next;
    Course* head;
    int count = 0;

public:
    CourseList();//constructor

    bool appendNode(Course* bundle); //Linked list functions
    bool searchNode(double num);
    bool deleteNode(double num);
    bool insertNode(Course* bundle);

    void display(); //display all classes
    void displayCount();
};