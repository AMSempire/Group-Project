#include <iostream>
#include <string>
#include <fstream>
#include "Student.h"
#include "CourseList.h"
#include "StudentList.h"
#include "Advisor.h"
#include "AdvisorList.h"
using namespace std;



int main() {

    //these are test courses.

    Course testCourse("CompSci", 122, "Programming in C++",
                      "Spring", "Virtual", "Taking", 'A');
    Course testCourse2("CompSci", 121, "Programming in C++",
                       "Spring", "Virtual", "Completed", 'B');
    Course testCourse3("Math", 141, "Calculus 2",
                       "Spring", "In Person", "Taking", 'A');


    /*
    CourseList courses;

    courses.appendNode(&testCourse);
    courses.appendNode(&testCourse3);  //course linked list testing
    courses.insertNode(&testCourse2);
    courses.searchNode(3);
    courses.deleteNode(2);

    courses.display();

    */


    int choice, choiceo,  NUMOFSTUDENTS, NUMOFADVISORS,  PICK, picker, coursePicker, sortPick; //Initializing Variables
    string title, officeLocation, email;
    double officeNum;
    fstream file;
    Student *student;
    Student tempstu;
    StudentList NewList; //dynamic variable for students
    AdvisorList NewList2;
    Advisor* advisor;
    Advisor tempAdv;
    char yesno;
    int num;
    string majorPick;


    string fName, mName, lName, department;


    do {

        cout << "-------------------------" << endl;
        cout << "|   Press a Number       |" << endl;
        cout << "|1. Add an Advisor       |" << endl;
        cout << "|2. Edit an Advisor      |" << endl;
        cout << "|3. Delete an Advisor    |" << endl;
        cout << "|4. Display an Advisor   |" << endl;
        cout << "|5. Display Compact View |" << endl;
        cout << "|6. Display Total View   |" << endl;
        cout << "|7. Sort Advisors        |" << endl;
        cout << "|8. Search for Student   |" << endl;
        cout << "|9. Search by department|" << endl;
        cout << "|10. Search by email     |" << endl;
        cout << "|11. Search by Title     |" << endl;
        cout << "|12. Write to a File      |" << endl;
        cout << "|13. Read from a File    |" << endl;
        cout << "|14. Exit                |" << endl;
        cout << "-------------------------" << endl;

        cin >> choiceo;

        switch (choiceo) {
            case 1:
                cout << "How many Advisors would you like to add?" << endl; //adding students
                cin >> NUMOFADVISORS; // Array Value
                advisor = new Advisor[NUMOFADVISORS];
                student = new Student[5];

                for (int i = 0; i < NUMOFADVISORS; i++) {

                    NewList.appendNode(&student[i]);

                    cout << "What is the advisors name?" << endl;
                    cin >> fName >> mName >> lName;
                    cout << "What is the advisors department?" << endl;
                    cin >> department;


                    advisor[i].setfName(fName);
                    advisor[i].setmName(mName);
                    advisor[i].setlName(lName);
                    advisor[i].setDepart(department);

                    advisor[i].addStudent(&student[i]);
                    student[i].addCourse(&testCourse);

                }
                cout << "Successfully added " << NUMOFADVISORS << " students the the list." << endl;

                break;

            case 2:
                cout << "Which advisor would you like to edit? " << endl;
                for (int i = 0; i < NUMOFADVISORS; i++) {
                    cout << advisor[i].getfName() << advisor[i].getmName() << advisor[i].getlName() << endl;
                    //pick a advisor that you want to edit
                }
                cin >> PICK;

                cout << "What do you want to edit?" << endl;

                do {
                    cout << "-------------------------" << endl;
                    cout << "|   Press a Number      |" << endl;
                    cout << "|1. Advisor Name        |" << endl;
                    cout << "|2. Advisor Title       |" << endl;
                    cout << "|3. Advisor Department  |" << endl;
                    cout << "|4. Advisor Office      |" << endl;
                    cout << "|5. Office Number       |" << endl;
                    cout << "|6. Email               |" << endl;
                    cout << "|7. Students            |" << endl;
                    cout << "|8. Quit                |" << endl;
                    cout << "-------------------------" << endl;

                    cin >> picker;

                    switch (picker) {
                        case 1:
                            cout << "What is the advisors name?" << endl;
                            cin >> fName >> mName >> lName;
                            advisor[PICK].setfName(fName);
                            advisor[PICK].setmName(mName);
                            advisor[PICK].setlName(lName);
                            break;
                        case 2:
                            cout << "What is the advisors title?" << endl;
                            cin >> title;
                            advisor[PICK].setTitle(title);
                            break;
                        case 3:
                            cout << "What is the advisors department?" << endl;
                            cin >> department;

                            advisor[PICK].setDepart(department);
                            break;
                        case 4:
                            cout << "What is the advisors office location?" << endl;
                            cin >> officeLocation;

                            advisor[PICK].setOfficeLoc(officeLocation);
                            break;
                        case 5:
                            cout << "What is the advisors office number?" << endl;
                            cin >> officeNum;

                            advisor[PICK].setOfficeNum(officeNum);

                            break;
                        case 6:
                            advisor[PICK].setEmail();

                            break;
                        case 7:
                            choiceo = 14; //exit the loop to edit the student information
                            break;

                    }while (picker != 8);


                    break;
                    case 3:
                        cout << "Which advisor would you like to delete? " << endl;
                    for (int i = 0; i < NUMOFADVISORS; i++) {
                        cout << advisor[i].getTitle() << advisor[i].getlName() <<endl; //pick a student that you want to delete
                    }
                    cin >> PICK;
                    delete &advisor[PICK];
                    cout << "The advisor has been deleted." << endl;
                    break;

                    case 4:
                        cout << "Which advisor would you like to display? " << endl;
                    for (int i = 0; i < NUMOFADVISORS; i++) {
                        cout << advisor[i].getTitle() << advisor[i].getlName() << endl; //pick a student that you want to view
                    }
                    cin >> PICK;
                    advisor[PICK].display(); //display info for selected student.
                    break;

                    case 5:
                        for (int i = 0; i < NUMOFSTUDENTS; i++) {

                            advisor[i].getTitle();
                            advisor[i].getlName();
                            advisor[i].getDepart();

                        }

                        break;
                    case 6:
                        for (int i = 0; i < NUMOFSTUDENTS; i++) {
                            advisor[i].display();
                        }
                    break;
                    case 7:

                        cout << "How would you like to sort the advisors?" << endl;
                    cout << "1. Last Name                            " << endl;
                    cout << "2. Email                                " << endl;
                    cout << "3. Department                           " << endl;

                    cin >> sortPick;

                    switch(sortPick) {
                        case 1:

                            for (int i = 0; i < NUMOFADVISORS; i++) {

                                if (advisor[i].getlName() > advisor[i + 1].getlName()) {
                                    tempAdv = advisor[i];
                                    advisor[i] = advisor[i + 1];
                                    advisor[i + 1] = tempAdv;
                                }
                            }
                            cout << "successfully sorted advisors by last name. " << endl;
                            break;
                        case 2:
                            for (int i = 0; i < NUMOFADVISORS; i++) {

                                if (advisor[i].getEmail() > advisor[i + 1].getEmail()) {
                                    tempAdv = advisor[i];
                                    advisor[i] = advisor[i + 1];
                                    advisor[i + 1] = tempAdv;
                                }
                            }
                            cout << "successfully sorted advisors " << endl;

                            break;
                        case 3:
                            for (int i = 0; i < NUMOFADVISORS; i++) {

                        if (advisor[i].getDepart() > advisor[i + 1].getDepart()) {
                            tempAdv = advisor[i];
                            advisor[i] = advisor[i + 1];
                            advisor[i + 1] = tempAdv;
                        }
                    }
                            cout << "successfully sorted advisors " << endl;

                            break;
                        default:
                            cout << "This is an invalid value. " << endl;
                    }
                    break;
                    case 8:
                        cout << "What department?" << endl;
                    cin >> majorPick;
                    for (int i = 0; i < NUMOFADVISORS; i++) {
                        if(majorPick == advisor[i].getDepart()){
                            advisor[i].display();
                        }}
                    break;
                    case 9:
                        cout << "What Email?" << endl;
                    cin >> majorPick;
                    for (int i = 0; i < NUMOFADVISORS; i++) {
                        if(majorPick == advisor[i].getEmail()){
                            advisor[i].display();
                        }}
                    break;
                    case 10:
                        cout << "What Title?" << endl;
                    cin >> majorPick;
                    for (int i = 0; i < NUMOFADVISORS; i++) {
                        if(majorPick == advisor[i].getTitle()){
                            advisor[i].display();
                        }}
                    break;
                    case 11:
                        file.open("File Name", ios::out); // open file for writing
                    cout << "Writing Advisor information to the file" << endl;
                    cout << "Entering " << NUMOFADVISORS << " advisors details to the file..." << endl;
                    for (int i = 0; i < picker; i++) {
                        advisor[i].getlName();
                        // write the object to a file
                        file.write((char *) &advisor[i], sizeof(advisor[i]));
                    }
                    cout << "Successfully wrote" << NUMOFADVISORS << "advisors to a file.\n";
                    file.close(); // close the file
                    break;

                    case 12:
                        file.open(" File Name", ios::in); // open file for reading
                    cout << "Reading Advisor info to the File" << endl;
                    for (int i = 0; i < picker; i++) {
                        // read an object from a file
                        file.read((char *) &advisor[i], sizeof(advisor[i]));
                        advisor[i].display();
                    }
                    file.close(); // close the file
                    break;
                    default:
                        cout << "You have entered an invalid value. Please try again." << endl;
                } while (choiceo != 14);
        }
    } while (choiceo != 14);
    return 0;

    if(choiceo ==14) {

        do {

            cout << "-------------------------" << endl;
            cout << "|   Press a Number      |" << endl;
            cout << "|1. Add a Student       |" << endl;
            cout << "|2. Edit a Student      |" << endl;
            cout << "|3. Delete a Student    |" << endl;
            cout << "|4. Display a Student   |" << endl;
            cout << "|5. Display Objective   |" << endl;
            cout << "|6. Display Compact View|" << endl;
            cout << "|7. Display Total View  |" << endl;
            cout << "|8. Sort Students       |" << endl;
            cout << "|9. Search for Student  |" << endl;
            cout << "|10. Write to a File     |" << endl;
            cout << "|11. Read from a File    |" << endl;
            cout << "|12. Exit                |" << endl;
            cout << "-------------------------" << endl;

            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "How many students would you like to add?" << endl; //adding students
                    cin >> NUMOFSTUDENTS; // Array Value
                    student = new Student[NUMOFSTUDENTS];

                    for (int i = 0; i < NUMOFSTUDENTS; i++) {

                        NewList.appendNode(&student[i]);
                        student[i].setname();
                        student[i].setphoneNumber();
                        student[i].setstuID();
                        student[i].setStatus();
                        student[i].setMajor();
                        student[i].addCourse(&testCourse);

                    }
                    cout << "Successfully added " << NUMOFSTUDENTS << " students the the list." << endl;

                    break;

                case 2:
                    cout << "Which student would you like to edit? " << endl;
                    for (int i = 0; i < NUMOFSTUDENTS; i++) {
                        cout << student[i].getname();
                        cout << endl; //pick a student that you want to edit
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
                        cout << "|6. Student User ID     |" << endl;
                        cout << "|7. BirthDate           |" << endl;
                        cout << "|8. Acceptance Date     |" << endl;
                        cout << "|9. Start Semester      |" << endl;
                        cout << "|10. Major              |" << endl;
                        cout << "|11. Minor              |" << endl;
                        cout << "|12. Status             |" << endl;
                        cout << "|13. Edit Courses       |" << endl;
                        cout << "|14. Quit               |" << endl;
                        cout << "-------------------------" << endl;

                        cin >> picker;

                        switch (picker) {
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
                            case 13:
                                do {

                                    cout << "------------------------" << endl;
                                    cout << " Menu for Courses       " << endl;
                                    cout << "1. Add a new course     " << endl;
                                    cout << "2. delete a course      " << endl;
                                    cout << "3. search for a course  " << endl;
                                    cout << "4. insert a new course  " << endl;
                                    cout << "5. Quit                 " << endl;
                                    cout << "------------------------" << endl;

                                    cin >> coursePicker;
                                    switch (coursePicker) {
                                        case 1:
                                            cout << "Would you like to add a new course?" << endl;
                                            cout << "Press y or n" << endl;
                                            cin >> yesno;
                                            if (yesno = 'y') {
                                                student->addCourse(&testCourse3);
                                                cout << "Course added." << endl;
                                                break;
                                            } else break;

                                        case 2:
                                            cout << "enter the course number for the course "
                                                    "that is to be deleted." << endl;
                                            cin >> num;
                                            student->deleteCourse(num);
                                            break;
                                        case 3:
                                            cout << "enter the number for the course you"
                                                    " would like to search for. " << endl;
                                            cin >> num;
                                            student->searchCourse(num);
                                            break;
                                        case 4:
                                            cout << "Would you like to insert a new course?" << endl;
                                            cout << "Press y or n" << endl;
                                            cin >> yesno;
                                            if (yesno = 'y') {
                                                student->insertCourse(&testCourse3);
                                                cout << "Course added." << endl;
                                                break;
                                            }
                                            while (coursePicker != 5);
                                    }
                                } while (picker != 14);
                        }

                        break;
                        case 3:
                            cout << "Which student would you like to delete? " << endl;
                        for (int i = 0; i < NUMOFSTUDENTS; i++) {
                            cout << student[i].getname() << endl; //pick a student that you want to delete
                        }
                        cin >> PICK;
                        delete &student[PICK];
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
                            //there is no objective.
                            break;
                        case 6:
                            for (int i = 0; i < NUMOFSTUDENTS; i++) {
                                student[i].getname();
                                student[i].getphoneNumber();
                                student[i].getEmail();
                                student[i].getstuID();
                            }
                        break;
                        case 7:
                            for (int i = 0; i < NUMOFSTUDENTS; i++) {
                                student[i].displayStudent();
                                cout << endl;
                            }
                        break;
                        case 8:
                            cout << "How would you like to sort the students?" << endl;
                        cout << "1. Last Name                            " << endl;
                        cout << "2. Student ID                           " << endl;
                        cout << "3. Major                                " << endl;
                        cout << "4. Status                               " << endl;
                        cin >> sortPick;

                        switch (sortPick) {
                            case 1:

                                for (int i = 0; i < NUMOFSTUDENTS; i++) {

                                    if (student[i].getlastName() > student[i + 1].getlastName()) {
                                        tempstu = student[i];
                                        student[i] = student[i + 1];
                                        student[i + 1] = tempstu;
                                    }
                                }
                                cout << "successfully sorted students by last name. " << endl;
                                break;
                            case 2:
                                for (int i = 0; i < NUMOFSTUDENTS; i++) {

                                    if (student[i].getstuID() > student[i + 1].getstuID()) {
                                        tempstu = student[i];
                                        student[i] = student[i + 1];
                                        student[i + 1] = tempstu;
                                    }
                                }
                                cout << "successfully sorted students " << endl;

                                break;
                            case 3:
                                for (int i = 0; i < NUMOFSTUDENTS; i++) {

                                    if (student[i].getMajor() > student[i + 1].getMajor()) {
                                        tempstu = student[i];
                                        student[i] = student[i + 1];
                                        student[i + 1] = tempstu;
                                    }
                                }
                                cout << "successfully sorted students " << endl;
                                break;
                            case 4:
                                for (int i = 0; i < NUMOFSTUDENTS; i++) {
                                    if (student[i].getStatus() > student[i + 1].getStatus()) {
                                        tempstu = student[i];
                                        student[i] = student[i + 1];
                                        student[i + 1] = tempstu;
                                    }
                                }
                                cout << "successfully sorted students " << endl;
                                break;
                            default:
                                cout << "This is an invalid value. " << endl;
                        }
                        break;
                        case 9:
                            cout << "What major?" << endl;
                        cin >> majorPick;
                        for (int i = 0; i < NUMOFSTUDENTS; i++) {
                            if (majorPick == student[i].getMajor()) {
                                student[i].displayStudent();
                            }
                        }
                        break;
                        case 10:
                            cout << "What semester?" << endl;
                        cin >> majorPick;
                        for (int i = 0; i < NUMOFSTUDENTS; i++) {
                            if (majorPick == student[i].getSemesterName()) {
                                student[i].displayStudent();
                            }
                        }
                        break;

                        case 11:
                            cout << "What status?" << endl;
                        cin >> majorPick;
                        for (int i = 0; i < NUMOFSTUDENTS; i++) {
                            if (majorPick == student[i].getStatus()) {
                                student[i].displayStudent();
                            }
                        }
                        break;


                        case 12:
                            file.open("File Name", ios::out); // open file for writing
                        cout << "Writing Student information to the file" << endl;
                        cout << "Entering " << NUMOFSTUDENTS << " students details to the file..." << endl;
                        for (int i = 0; i < picker; i++) {
                            student[i].getname();
                            // write the object to a file
                            file.write((char *) &student[i], sizeof(student[i]));
                        }
                        cout << "Successfully wrote" << NUMOFSTUDENTS << "students to a file.\n";
                        file.close(); // close the file
                        break;

                        case 13:
                            file.open(" File Name", ios::in); // open file for reading
                        cout << "Reading Student info to the File" << endl;
                        for (int i = 0; i < picker; i++) {
                            // read an object from a file
                            file.read((char *) &student[i], sizeof(student[i]));
                            student[i].displayStudent();
                        }
                        file.close(); // close the file
                        break;
                        default:
                            cout << "You have entered an invalid value. Please try again." << endl;
                    } while (choice != 14);
            }
        } while (choice != 14);

        if (choice != 14){
            choiceo = 0;
        }

    }

    return 0;

}