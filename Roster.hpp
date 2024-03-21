//
//  Roster.hpp
//  C867
//
//  Created by Champ Harwood on 7/25/23.
//

#ifndef Roster_hpp
#define Roster_hpp
#include <string>
#include "Student.hpp"
#include "Degree.hpp"

#include <stdio.h>


using namespace std;

class Roster {
    
   /* const string studentData[5] =
    
    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Micah,Harwood,mharwo6@wgu.edu,24,32,55,43,SOFTWARE" }; */ //For reference
    
private:
    //Students *classRosterArray[5];
    int sizeofRoster{5}, fillArray{-1};
    
public:
    Students *classRosterArray[5]; /* This needed to be put in public so that the printAverageDaysInCourse in main() can loop through all the students */
    Roster();
    ~Roster();
    void createRoster(Students *classRosterArray[5]);
    
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToComplete1, int daysToComplete2, int daysToComplete3, DegreeProgram degreeprogram);
    
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeprogram);
    
    
};
#endif /* Roster_hpp */
