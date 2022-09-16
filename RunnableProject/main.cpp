#include <iostream>
#include <string>
#include <fstream>
#include "Student.h"
using namespace std;



int main() {
    int choice, NUMOFSTUDENTS, PICK, picker; //Initializing Variables
    fstream file;
    Student *student;

    do {

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

        switch (choice) {
            case 1:
                cout << "How many students would you like to add?" << endl; //adding students
                cin >> NUMOFSTUDENTS; // Array Value
                student = new Student[NUMOFSTUDENTS]; //dynamic variable for students
                cout << "Successfully added " << NUMOFSTUDENTS << " students." << endl;
                break;
            case 2:
                cout << "Which student would you like to edit? " << endl;
                for (int i = 0; i < NUMOFSTUDENTS; i++) {
                    cout << i + 1 << endl; //pick a student that you want to edit
                }
                cin >> PICK;

                cout << "What do you want to edit?" << endl;

                do {
                    cout << "-------------------------" << endl;
                    cout << "|   Press a Number      |" << endl;
                    cout << "|1. Student Name        |" << endl;
                    cout << "|2. Student Number      |" << endl;
                    cout << "|3. Student Email       |" << endl;
                    cout << "|4. Student ID          |" << endl;
                    cout << "|5. Student Address     |" << endl;
                    cout << "|6. Student UserID      |" << endl;
                    cout << "|7. BirthDate           |" << endl;
                    cout << "|8. Acceptance Date     |" << endl;
                    cout << "|9. Start Semester      |" << endl;
                    cout << "|10. Major              |" << endl;
                    cout << "|11. Minor              |" << endl;
                    cout << "|12. Status             |" << endl;
                    cout << "|13. Quit               |" << endl;
                    cout << "-------------------------" << endl;

                    cin >> picker;

                    switch(picker){
                        case 1:
                            student[PICK].setname();
                            break;
                        case 2:
                            student[PICK].setphoneNumber();
                            break;
                        case 3:
                            student[PICK].setEmail();
                            break;
                        case 4:
                            student[PICK].setstuID();
                            break;
                        case 5:
                            student[PICK].setMailingAddress();
                            break;
                        case 6:
                            student[PICK].setstudentUName();
                        case 7:
                            student[PICK].setBDate();
                            break;
                        case 8:
                            student[PICK].setADate();
                            break;
                        case 9:
                            student[PICK].setStart();
                            break;
                        case 10:
                            student[PICK].setMajor();
                            break;
                        case 11:
                            student[PICK].setMinor();
                            break;
                        case 12:
                            student[PICK].setStatus();
                            break;
                        default:
                             cout << "This is an invalid value. Please try again. " << endl;
                    }
                }while(picker != 13);
                    break;
            case 3:
                cout << "Which student would you like to delete? " << endl;
                for (int i = 0; i < NUMOFSTUDENTS; i++) {
                    cout << student[i].getname() << endl; //pick a student that you want to delete
                }
                cin >> PICK;

                cout << "The student has been deleted." << endl;


                break;
            case 4:
                cout << "Which student would you like to display? " << endl;
                for (int i = 0; i < NUMOFSTUDENTS; i++) {
                    cout << student[i].getname() << endl; //pick a student that you want to view
                }
                cin >> PICK;
                student[PICK].displayStudent(); //display info for selected student.

                break;
            case 5:
                for (int i = 0; i < NUMOFSTUDENTS; i++) {
                    student[i].getname();
                    student[i].getphoneNumber();
                    student[i].getEmail();
                    student[i].getstuID();
                }
                break;
            case 6:
                for (int i = 0; i < NUMOFSTUDENTS; i++){
                    student[i].displayStudent();
                    cout << endl;
                }
                break;
            case 7:
                file.open("File Name", ios :: out); // open file for writing
                cout << "Writing Student information to the file" << endl;
                cout << "Entering "<< NUMOFSTUDENTS << " students details to the file..." << endl;
                for (int i = 0; i < picker; i++)
                {
                    student[i].getname();
                    // write the object to a file
                    file.write((char *)&student[i], sizeof(student[i]));
                }
                cout << "Succesfully wrote" << NUMOFSTUDENTS << "students to a file.\n";
                file.close(); // close the file
                    break;

            case 8:
                file.open(" File Name", ios :: in); // open file for reading
                cout << "Reading Student info to the File" << endl;
                for (int i = 0; i < picker; i++)
                {
                    // read an object from a file
                    file.read((char *)&student[i], sizeof(student[i]));
                    student[i].displayStudent();
                }
                file.close(); // close the file
                break;
            default:
                cout << "You have entered an invalid value. Please try again." << endl;
        }
    } while (choice != 9);

return 0;
}