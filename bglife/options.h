#ifndef OPTIONS_H
#define OPTIONS_H

typedef enum graphical {
    G_TERMINAL
} Graphical;

typedef enum debug_out {
    TERMINAL, FILE_LOG
} Debug_out;

typedef struct options {
    int debug;
    Graphical graphical;
    Debug_out debug_out;
} Options;

void options_set(Options *op, int *argc, char *argv[]);
int debug(void);

#endif /* OPTIONS_H */