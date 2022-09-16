//
// Created by Aaron Shabon on 4/27/22.
//
#include "Student.h"
#include <iostream>
using namespace std;

class StudentList{
private:

        Student* next;
        Student* head;

    int count = 0;


public:
    StudentList();//constructor

    bool appendNode(Student* bundle); //Linked list functions
    bool searchNode(double num);
    bool deleteNode(double num);
    bool insertNode(Student* bundle);

    void display(); //display all classes
    void displayCount();
};

