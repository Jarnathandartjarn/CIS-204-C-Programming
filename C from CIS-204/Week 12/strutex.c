#include <stdio.h>

struct Student {
    char name[20];
    float gpa;
    int age;
    float height;
};

int main(){

    struct Student s1 = {"Alice", 3.1, 22, 2.2};
    struct Student s2 = {"Bob", 3.0, 19, 1.9};
    struct Student s3 = {"Carol", 3.5, 25, 2.5};

for(int i = 0; i < sizeof(names)/sizeof(names[0]); i++){
    printf("%s\n", names[i]);
    printf("%.2f\n\n", gpas[i]);
}

return 0;
}