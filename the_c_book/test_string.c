#include <stdio.h>

void strcopy(char *s, char *t) {
    while(*s++ = *t++)
        ;
}

int strcmp(char *s, char *t) {
    for(;*s == *t; s++, t++) /* no shorting; otherwise if wouldn' work */
        if(*s == '\0')
            return 0;
    return *s - *t;
}

int main(void) {

    if(!'\0') printf("This is NOT ZERO\n");
    printf("%d\n", '\0');

    char s[] = "Hello";
    char t[] = "rofle";
    // strcopy(s, t);

    printf("%s\n", s);
    printf("%s\n", t);

    //printf("is %d\n", strcmp(s, t));
    printf("is %d\n", strcmp(t, t));

    return 0;
}