// My brain on how it should be working?
// read the file
    //fopen , fread
// identify the keywords
    // write a keyword in front of all the questions
// separate them out
    // strstr
    // take out the text from the inbetween the strstr pointers.
    // store it in a array ig?
// make a .c file 
// input the separated thing into the .c file
// twadaa you're donee 


#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>



int main(){

    FILE * file;
    int problem_number = 1;

// open the file.
    file = fopen("sample.c", "r+");
    assert(file != NULL);

// loading the file.

    // getting the size
    long size;
    fseek(file, 0, SEEK_END);
    size = ftell(file);
    rewind (file);

    // allocating the memory for the file.
    char* buffer;
    buffer = (char*)malloc(sizeof(char)*size);

    // copy pasting the thing in the buffer
    size_t result;
    result = fread(buffer, 1, size, file);

// getting the pointers to the question start and ending.

    // splitting the thing into tokens
    // start of the question
    char* start = buffer;
    while(strstr(start, "/*") != NULL){
    char* prob_start = strstr(start, "/*");
    // end of the solution
    char* prob_end;
    prob_end = strstr(prob_start, "*/");
    
// getting the stuff from the inbetween lol
    int length = prob_end - prob_start;
    char* problem = (char*)malloc(length + 1);
    strncpy(problem, prob_start + 2, length -2);
    problem[length] = '\0';

// make a .c file.
    char file_name[100];
    sprintf(file_name, "problem_%d.c", problem_number);
    FILE *new_file = fopen(file_name, "w");

// input the stuff to the new file.
    fputs(problem, new_file);
    fclose(new_file);
    printf("problem number %d saved to file %s.\n", problem_number , file_name);

// increase the start to some other value.
    start = prob_end + 2;
    problem_number++;
    
    }

    free(buffer);

    return 0;
}






