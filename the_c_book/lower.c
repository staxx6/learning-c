/*
    Tested echo "LLASD\nTEST" | ./lower
    works ;>
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {

    int *a = malloc(sizeof(int));

    int c;
    while((c = getchar()) != EOF)
        putchar(tolower(c));
    return 0;
}