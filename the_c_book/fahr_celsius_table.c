#include <stdio.h>

/*
    Print a table from 0 to 300 in F°
    with corresponding C° unit
*/

void fahrenheit_to_celsius(float *f, float *c) {
    *c = 5.0 * (*f - 32.0) / 9.0; 
    /* (* 5/9) wouldn't work because of 5int/9int would result in 0 (old version) */
}

int main(void) {

    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temp table*/
    upper = 300; /* upper limit */
    step = 20; /* step size */

    printf(" °F\t    °C\n");

    fahr = lower;
    while(fahr <= upper) {
        fahrenheit_to_celsius(&fahr, &celsius);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("------------------------------\n");

    int fahr2;
    for(fahr2 = 0; fahr2 <= 300; fahr2 = fahr2 + 20)
        printf("%3d\t%6.1f\n", fahr2, (5.0/9.0)*(fahr2-32));

    printf("------------------------------\n");

    int fahr3;
    for(fahr3 = 300; fahr3 >= 0; fahr3 = fahr3 - 20)
        printf("%3d\t%6.1f\n", fahr3, (5.0/9.0)*(fahr3-32));

    return 0;
}

