#include <stdio.h>

int main(void) {

    int c;

    printf("%d\n", EOF);

    while((c = getchar()) != EOF){
        putchar(c);
    }
    return 0;
}