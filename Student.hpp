//
//  Student.hpp
//  C867
//
//  Created by Champ Harwood on 7/25/23.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <string>
#include "Degree.hpp"

using namespace std;


class Students {
    
    
private: 
    string studentID{}, firstName{}, lastName{}, emailAddress{};
    int age {}, daysInCourse1{}, daysInCourse2{}, daysInCourse3{};
    int daysToComplete[3]; // array variable which stores the days to complete 3 courses
    DegreeProgram degreeprogram;
    
public:
    
    Students(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysinCourse3, DegreeProgram degreeprogram);
    
    void print();
    
    
    
    void setStudentID(string studentID);
    
    void setFirstName(string firstName);
    
    void setLastName(string lastName);
    
    void setEmailAddress(string emailAddress);
    
    void setDegreeProgram(DegreeProgram degreeprogram);
    
    void setAge(int age);
    
    void setDaysToComplete(int daysToComplete[3]);
    
     
    
    string getStudentID();
    
    string getFirstName();
    
    string getLastName();
    
    string getEmailAddress();
    
    DegreeProgram getDegreeProgram();
    
    int getAge();
    
    int *getDaysToComplete();//points to the first index of the array daysToComplete. The alternative is to make a getter for the 3 daysInCourse variables
   
};

#endif /* Student_hpp */
