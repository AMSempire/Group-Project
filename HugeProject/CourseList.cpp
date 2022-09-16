//
// Created by Aaron Shabon on 4/27/22.
//
#include "CourseList.h"


CourseList::CourseList() {
    head = nullptr;
    count = 0;

}

bool CourseList::appendNode(Course* bundle) {
//create a new node (wrap up value into a node)
    Course *temp = new Course();
    temp = bundle;//creating a pointer to a new dynamic variable, initialized with a course
    temp->setNext(nullptr); //set the next pointer to point to nothing
    Course *nodePtr; //create a new pointer
    nodePtr = head; //make it the head of the linked list
    if (!head) { // if there is no head, then c will be the head
        head = temp;
    } else
        while (temp->getNext() != nullptr) { //while we go through the linked list to the end point along
            nodePtr = nodePtr->getNext();
        }
    nodePtr->setNext(bundle); //node pointer now points to temp
    count++;
    return true;
}
bool CourseList::searchNode(double num) {
    Course* searcho = head;
    if (!head){
        cout << "The list is empty"; //there isnt any values in the list
        return false;
    } else
    { while (searcho){
            if (searcho->getNumber() == num) { //if the course number is the same the course is found in the list
                cout << "Course Found";
                return true;
            } else {
                searcho = searcho->getNext(); } //keep going until you find it
        }
        cout << "Error: Course not found." << endl;
        return false;
    }
}

bool CourseList::deleteNode(double num) {

    Course* deleto = head;
    Course* previousPtr = nullptr; //created a tranverse pointer and deleto pointer
    if(!head){ //so no head
        cout << "There is nothing in this list.";
        return false;
    } if (head->getNumber() == num) { //if the head is the one with the same number
        deleto = deleto->getNext();
        delete head;
        head = deleto;
        cout << "The course has been deleted!" << endl; //replace the head with deleto pointer so there
        count--;
        return true;                                    // is still a head
    } else {
        while (deleto!=nullptr && deleto->getNumber() != num) { //search the list
            previousPtr = deleto;
            deleto = deleto->getNext(); //keep switching pointers to go along list
        } if (deleto != nullptr) {
            previousPtr->setNext(deleto->getNext()); //keep going through until found
            delete deleto;
            cout << "Deleted it! " << endl; //successful deletion
            count--;
            return true;
            count--;
        }}
    return false;
}

bool CourseList::insertNode(Course* bundle){
    Course * c; //creating a new empty course pointer
    c = bundle; //dynamically create course
    Course *ptr = head; //setting the new course pointer equal to the head of the program
    Course *previousPtr = nullptr; //setting a "previous pointer" that points to nothing yet
    if(!head){
        head = c; //c is the head
    }
    else{
        while(ptr != nullptr){ //move list
            previousPtr = ptr;
            ptr = ptr->getNext();
        }
        if(previousPtr == nullptr){
            c->setNext(ptr);
            head = c;
            return true;
        }
        else{
            c->setNext(ptr);
            previousPtr->setNext(bundle); //keep going
        }}
    return false;
    count++;
}

void CourseList::display() {

    cout << "Course List:" << endl;
    Course *c; //create a new pointer c
    c = this->head; // set the next value to the same value that the head has
    while (c != nullptr) { //while c is not at the end of the list
        c->displayCourse(); //display the course information
        c = c->getNext();
    }
    do{
        c->displayCourse();
        c = c->getNext();
    } while (c->getNext()); //loop to keep going
}

void CourseList::displayCount(){
    cout << count;
}