/*
    A sorting program. 
    This sort pointers which points to chars 
    ~ pointer array
*/

#include <stdio.h>
#include <string.h>

#define MAXLINES 5000
#define MAXLEN 1000

char *lineptr[MAXLINES];

int getline(char * line, int n) {
    return 0;
}

int readlines(char *lineptr[], int maxlines) {
    
}

int writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

int main(void) {

    int nlines;

    if((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        qsort(lineptr, 0, nlines-1);
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("error: input too big to sort\n");
        return 1;
    }

    return 0;
}

