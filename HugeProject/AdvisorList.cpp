//
// Created by Aaron Shabon on 5/3/22.
//

#include "AdvisorList.h"
#include "Advisor.h"

AdvisorList::AdvisorList() {
    head = nullptr;
    next = nullptr;
    count = 0;

}

bool AdvisorList::appendNode(Advisor* bundle) {

    Advisor* temp = bundle;//creating a pointer to a new dynamic variable, initialized with a course
    temp->setNext(nullptr); //set the next pointer to point to nothing
    Advisor *nodePtr; //create a new pointer
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
bool AdvisorList::searchNode(string name) {
    Advisor* searcho = head;
    if (!head){
        cout << "The list is empty"; //there isnt any values in the list
        return false;
    } else
    { while (searcho){
            if (searcho->getfName() == name) { //if the course number is the same the course is found in the list
                cout << "Course Found";
                return true;
            } else {
                searcho = searcho->getNext(); } //keep going until you find it
        }
        cout << "Error: Course not found." << endl;
        return false;
    }
}

bool AdvisorList::deleteNode(string name) {

    Advisor* deleto = head;
    Advisor* previousPtr = nullptr; //created a tranverse pointer and deleto pointer
    if(!head){ //so no head
        cout << "There is nothing in this list.";
        return false;
    } if (head->getfName() == name) { //if the head is the one with the same number
        deleto = deleto->getNext();
        delete head;
        head = deleto;
        cout << "The course has been deleted!" << endl; //replace the head with deleto pointer so there
        count--;
        return true;                                    // is still a head
    } else {
        while (deleto!=nullptr && deleto->getfName() != name) { //search the list
            previousPtr = deleto;
            deleto = deleto->getNext(); //keep switching pointers to go along list
        } if (deleto != nullptr) {
            previousPtr->setNext(deleto->getNext()); //keep going through until found
            delete deleto;
            cout << "Deleted it! " << endl; //successful deletion
            count--;
            return true;
        }}
    return false;
}

bool AdvisorList::insertNode(Advisor* bundle){
    Advisor * c; //creating a new empty course pointer
    c = bundle; //dynamically create course
    Advisor *ptr = head; //setting the new course pointer equal to the head of the program
    Advisor *previousPtr = nullptr; //setting a "previous pointer" that points to nothing yet
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

void AdvisorList::display() {

    cout << "Course List:" << endl;
    Advisor* c; //create a new pointer c
    c = this->head; // set the next value to the same value that the head has
    while (c != nullptr) { //while c is not at the end of the list
        c->display(); //display the course information
        c = c->getNext();
    }
    do{
        c->display();
        c = c->getNext();
    } while (c->getNext()); //loop to keep going
}

void AdvisorList::displayCount() {
    cout << count;
}
