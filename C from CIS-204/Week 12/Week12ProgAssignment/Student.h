/* I now understand this file to be not just for the struct but for
   listing out the function prototypes as well*/

#ifndef STUDENT_H                              // If not defined for STUDENT_H
#define STUDENT_H                              // Defintion for STUDENT_H

typedef struct{                                // Student struct definition
    char studName[21];                         // Array to store student name
    double studGPA;                            // Student GPA
} Student;                                     // End struct Student defintiion

Student InitStudent(void);                     // Function prototype for InitStudent in Student.c
Student SetName(char *name, Student s);        // Function prototype for SetName in Student.c
Student SetGPA(double gpa, Student s);         // Function prototype for SetGPA in Student.c
Student GetName(char *studentName, Student s); // Function prototype for GetName in Student.c
Student GetGPA(double *studentGPA, Student s); // Function prototype for GetGPA in Student.c

#endif