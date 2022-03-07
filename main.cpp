#include <iostream>
#include<string>
#include "Student.h"
#include "Email.h"
#include "PhoneNumber.h"
#include "Date.h"
#include "MailingAddress.h"
#include "Semester.h"
using namespace std;

int displayMenu(int);

int main() {
    int choice;
    displayMenu(choice);
    cout << "choice is " << choice;


    return 0;


}

int displayMenu(int choice){

choice = 0;

    cout << "-------------------------" << endl;
    cout << "|   Press a Number      |" << endl;
    cout << "|1. Add a Student       |" << endl;
    cout << "|2. Edit a Student      |" << endl;
    cout << "|3. Delete a Student    |" << endl;
    cout << "|4. Display a Student   |" << endl;
    cout << "|5. Display Compact View|" << endl;
    cout << "|6. Display Total View  |" << endl;
    cout << "|7. Write to a File     |" << endl;
    cout << "|8. Read from a File    |" << endl;
    cout << "|9. Exit                |" << endl;
    cout << "-------------------------" << endl;

    cin >> choice;
    return choice;
}