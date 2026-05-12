/* I now understand this file to be not just for the struct but for
   listing out the function prototypes as well*/

#ifndef STUDENT_H                              // If not defined for STUDENT_H
#define STUDENT_H                              // Defintion for STUDENT_H

typedef struct{                                // Student struct definition
    char name[21];                         // Array to store student name
    double gpa;                            // Student GPA
} Student;                                     // End struct Student defintiion

Student InitStudent();
Student SetName(char *name, Student s);
Student SetGPA(double gpa, Student s);
void GetName(char* studentName, Student s);
double GetGPA(Student s);

#endif