#include <stdio.h>

/*
    EOF with CTRL+D
*/

int main(void) {

    long nc;

    nc = 0;
    
    while(getchar() != '\n')
        ++nc;
    printf("%ld\n", nc);

    double ncd;
    for(ncd = 0; getchar() != '\n'; ncd++)
        ;
    printf("%.0f\n", ncd);

    int c, nl;

    nl = 0;
    while((c = getchar()) != EOF)
        if(c == '\n')
            ++nl;
    printf("%d\n\n", nl);

    return 0;
}