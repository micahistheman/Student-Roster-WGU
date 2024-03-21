//
//  Student.cpp
//  C867
//
//  Created by Champ Harwood on 7/25/23.
//

#include "Student.hpp"
#include <string>
#include <iostream>

using namespace std;

Students::Students(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    this->daysToComplete[0] = daysInCourse1;
    this->daysToComplete[1] = daysInCourse2;
    this->daysToComplete[2] = daysInCourse3;
    this->degreeprogram = degreeprogram; //Could also use an initializer list
}



void Students::print() {
    cout << studentID << "\t First Name: " << firstName << "\t Last Name: " << lastName << "\t Email: " << emailAddress << "\t Age: " << age << "\t daysInCourse {" << daysToComplete[0] << " " << daysToComplete[1] << " " << daysToComplete[2] << "} Degree Program: ";
    
    switch(degreeprogram) {
        case DegreeProgram::SECURITY:
            cout << "Security." << endl;
            break;
        case DegreeProgram::SOFTWARE:
            cout << "Software." << endl;
            break;
        case DegreeProgram::NETWORK:
            cout << "Network." << endl;
            break;
    } //switch statement outputs the value of the enumerated data type passed in the constructor after the 3rd course complete value
}
    
    void Students::setStudentID(string studentID) {
        this->studentID = studentID;
    }
    void Students::setFirstName(string firstName) {
        this->firstName = firstName;
    }
    void Students::setLastName(string lastName) {
        this->lastName = lastName;
    }
    void Students::setEmailAddress(string emailAddress) {
        this->emailAddress = emailAddress;
    }
    void Students::setDegreeProgram(DegreeProgram degreeprogram) {
        this->degreeprogram = degreeprogram;
    }
    void Students::setAge(int age) {
        this->age = age;
    }

    void Students::setDaysToComplete(int daysToComplete[3]) {
        daysToComplete[0] = daysInCourse1;
        daysToComplete[1] = daysInCourse2;
        daysToComplete[2] = daysInCourse3;
    } //places the values passed for each day spent in a course to an index in the array


    
    string Students::getStudentID() {
        return studentID;
    }
    string Students::getFirstName() {
        return firstName;
    }
    string Students::getLastName() {
        return lastName;
    }
    string Students::getEmailAddress() {
        return emailAddress;
    }
    DegreeProgram Students::getDegreeProgram() {
        return degreeprogram;
    }
    int Students::getAge() {
        return age;
    }

    int *Students::getDaysToComplete() {
        return daysToComplete;
    }

