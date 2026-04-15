#include <stdio.h>
#include <string.h>

#include "Student.h"

int main() {
	// Create a Student struct
    Student student = InitStudent();
    char name[20];
    
    GetName(name, student);
    printf("The student's name is %s and GPA is %.1lf\n", name, GetGPA(student));
	
	// Update the Student struct
    student = SetName("Felix", student);
    student = SetGPA(3.7, student);
    GetName(name, student);
    printf("The student's name is %s and GPA is %.1lf\n", name, GetGPA(student));
    
	return 0;    
}