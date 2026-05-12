#include <stdio.h>
#include <time.h>

int main(){

    FILE* myFile = fopen("output.txt", "w");

    if(myFile == NULL){
        fprintf(stderr, "Could not open file\n");
        return 1; // exit program
    }
    
    int input1;
    int input2;

    fprintf(myFile, "Hello, world\n");
    fprintf(myFile, "Please enter any number:\n");
    fscanf(stdin, "%d", &input1);
    fprintf(myFile, "Please enter a number greater than 0:\n");
    fscanf(stdin, "%d", &input2);

    if(input2 == 0){
        time_t timestamp = time(NULL);
        fprintf(stderr, "[ERROR @ %ld] line %d: user entered invalid value %d\n", timestamp, __LINE__, input2);
        return 1;
    }

    fprintf(stdout, "Ok here we go, I'm going to divide 100 by %d\n", input2);
    fprintf(stdout, "100/%d  =  %d", notZero, 100/);

    return 0;
}