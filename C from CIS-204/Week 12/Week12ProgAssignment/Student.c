#include <stdio.h>                              // Base C Library
#include <string.h>                             // For string Library

#include "Student.h"                            // Student header file for the function prototypes

Student InitStudent(void){                      // Function definition for the first student
    Student stud;                           // The student data type variable
    strcpy(stud.studName, "Louie");         // Create Student "Louie"
    stud.studGPA = 1.0;                     // Louie's GPA is 1.0 (Literally, a failure)
    return stud;                            // Initial Student Created
}

Student SetName(char *name, Student s){         // Function definition for second student
    strcpy(s.studName, name);               // Copy and save the name of Felix
    return s;                               // Return Felix
}

Student SetGPA(double gpa, Student s){          // Function definition for Felix's GPA
    s.studGPA = gpa;                        // Felix's GPA is 3.7
    return s;                               // Return Felix with a GPA of 3.7
}

Student GetName(char *studentName, Student s){
    strcpy(studentName, s.studName);
    return s;
}

Student GetGPA (double *studentGPA, )