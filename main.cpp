//
//  main.cpp
//  C867
//
//  Created by Champ Harwood on 7/25/23.
//

#include <iostream>
#include "Student.hpp"
#include "Roster.hpp"
#include "Degree.hpp"
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    cout << "C867 Scripting and Programming Applications\n";
    cout << "C++, student ID: 011037496 Harwood\n";
    cout << endl;
    
    Roster classRoster; //add all students to the roster
    classRoster.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
    classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
    classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
    classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
    classRoster.add("A5", "Micah", "Harwood", "mharwo6@wgu.edu", 24, 26, 33, 30, SOFTWARE);
    
    classRoster.printAll();
    cout << endl;
    classRoster.printInvalidEmails();
    cout << endl;
    for (int i = 0; i < 5; i++) {
        classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i] -> getStudentID());
    }
    cout << endl;
    classRoster.printByDegreeProgram(SOFTWARE);
    cout << endl;
    classRoster.remove("A3");
    classRoster.printAll();
    cout << endl;
    classRoster.remove("A3");
    cout << endl;
    
    
    
    return 0;
}
