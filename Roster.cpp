//
//  Roster.cpp
//  C867
//
//  Created by Champ Harwood on 7/25/23.
//

#include "Roster.hpp"
#include <string>
#include "Student.hpp"
#include <iostream>

using namespace std;
    
    
    //Students *classRosterArray[5]; //array of pointers. 5 for each student object

    
    void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
        
        if (fillArray < 4) { //add all students in main to the array below
            fillArray++;
            classRosterArray[fillArray] = new Students(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
        }
    }

    void Roster::remove(string studentID) {
        bool studentFound = false;
        for (int i = 0; i < 5; i++) {
            if (classRosterArray[i] == nullptr) {
                cout << "Searching for student...\n";
                continue; //this is for when a user tries to remove an object that already has been removed it will skip over that empty index
            }
             else if (classRosterArray[i]->getStudentID() == studentID) {
                 cout << "Removing " << classRosterArray[i]->getStudentID() << " from the list\n";
                delete classRosterArray[i];
                classRosterArray[i] = nullptr;
                studentFound = true;
                break;
            }
        } //end of for loop
        if (!studentFound) {
            cout << "Student not found\n";
        }
    }

void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] == nullptr) {
            continue; /* When A3 is deleted in main, this will skip calling the print function for a nullpointer which would cause an error */
        }
        else {
            classRosterArray[i]-> print();
            
        }//print is from the 'Students' class
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    int threeCourses {3}, average {};
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            int *daysToComplete = classRosterArray[i] -> getDaysToComplete();
            for (int j = 0; j < threeCourses; j++) {
                average += daysToComplete[j];
            }
            average /= threeCourses;
            break; //breaks out of for i loop once the correct ID is found
        }
    }
    cout << "The average number of days spent in a class for student: " << studentID << " is " << average << " days\n";
}
    
void Roster::printInvalidEmails() {
    for (int i = 0; i < 5; i++) {
        string theEmail = classRosterArray[i] -> getEmailAddress();
            if (theEmail.find('@') == string::npos || theEmail.find(' ') != string::npos || theEmail.find('.') == string::npos) {
                cout << theEmail << " is an invalid email.\n";
            } //string::npos means 'no position' in the string, so find '@' == npos means there's no @ in the email
    }
}
    
void Roster::printByDegreeProgram(DegreeProgram degreeprogram) {
    switch(degreeprogram) {
        case DegreeProgram::SECURITY:
            cout << "Data for students under the SECURITY program:" << endl;
            break;
        case DegreeProgram::SOFTWARE:
            cout << "Data for students under the SOFTWARE program:" << endl;
            break;
        case DegreeProgram::NETWORK:
            cout << "Data for students under the NETWORK program:" << endl;
            break;
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] -> getDegreeProgram() == degreeprogram) {
            classRosterArray[i] -> print();
        }
    }
}
Roster::Roster() {

}

Roster::~Roster() {
    for (int i = 0; i < 5; i++) {
        delete classRosterArray[i]; //destroys the student object in each array index, freeing up its memory space.
    }
    cout << "Memory has been de-allocated\n";//Destructors are automatically called in main once the program ends. Run main and this statement will show that the destructor was implemented
}

