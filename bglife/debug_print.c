#include <stdio.h>

#include "options.h"

Debug_out *out;

void debug_option(Debug_out *o) {
    out = o;
}

/* print debug in options set output */
void printd(char *msg) {
    if(!debug()) return;

    switch(*out) {
        case TERMINAL:
            printf("%s", msg);
            break;
        default:
            break;
    }
}