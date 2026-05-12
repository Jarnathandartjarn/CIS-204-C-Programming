#include <stdio.h>                              // Base C Library
#include <string.h>                             // For string Library

#include "Student.h"                            // Student header file for the function prototypes

Student InitStudent(){
    Student s;
    strcpy(s.name, "Louie");
    s.gpa = 1.0;
    return s;
}

Student SetName(char *name, Student s){
    strcpy(s.name, name);
    return s;
}

Student SetGPA(double gpa, Student s){
    s.gpa = gpa;
    return s;
}

void GetName(char* studentName, Student s){
    strcpy(studentName, s.name);
}

double GetGPA(Student s){
    return s.gpa;
}