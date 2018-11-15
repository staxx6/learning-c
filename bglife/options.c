#include <stdio.h>
#include <string.h>

#include "options.h"
#include "debug_print.h"

Options *o;

void options_set(Options *op, int *argc, char *argv[]) {
    o = op;

    op->debug = 0;
    op->graphical = G_TERMINAL;

    int i;
    for(i = 1; i < *argc; i++) {

        if(!strcmp(argv[i], "-debug")) {
            op->debug = 1;
            op->debug_out = TERMINAL;
            debug_option(&(op->debug_out));
        }

        /* Graphic mode */
        if(!strcmp(argv[i], "-terminal")) {
            op->graphical = G_TERMINAL;
        }
    }
    printd("Options set to: ");
    if(op->debug) printd("-debug ");
    if(op->debug) printd("-debug_out_terminal ");
    if(op->graphical == G_TERMINAL) printd("-terminal_mode ");
    printd("\n");
}

int debug(void) {
    return o->debug;
}