#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

#include "stepper.h"
#include "options.h"
#include "debug_print.h"
#include "scene.h"

int main(int argc, char *argv[]) {
    /*
        Set Options and some variables
    */
    Options op = {0};
    options_set(&op, &argc, argv);

    int exit = 0;
    int pause = 1;
    char pause_input;

    /*
        Create scenes
    */
    Scene menue;
    char *name = malloc()
    menue.name = "menue";

    printf("%s\n", menue.name);

    /* Welcome message */
    printf("\n");
    printf("=-.__________________________.-=\n");
    printf("    The background life game    \n");
    printf("_.-==========================-._\n");
    printf("\n");

    /* Gameloop */
    while(!exit) {
        printd("Update-Loop\n");

        /* Pause handling*/
        if(pause) {
            printf("\tPAUSED\n");
            printf("\tpress p to continue \n");
            printf("\tpress e to exit \n");
            while((pause_input = getchar()) != 'p') {
                if(pause_input == 'e') {
                    exit = 1;
                    break;
                }
            }
            pause = 0;
        }
        if(exit) break;

        // render();
        step(1, 0);
    }

    /* Exit message */
    printf("\n");
    printf("=-.__________________________.-=\n");
    printf("             Bye Bye            \n");
    printf("_.-==========================-._\n");
    printf("\n");

    return 0;
}