#include <stdio.h>
#include <curses.h>

#include "terminalColor.h"

int main(void) {
    int c;
    initscr();
    //keypad (stdscr, TRUE); // activate keypad
    noecho();
    while((c = getch()) != 'q') { // read one char
        switch(c) {
            case KEY_DOWN:
                printw("KEY_DOWN : %d\n", c);
                break;
            case KEY_UP:
                printw("KEY_UP : %d\n", c);
                break;
            case KEY_LEFT:
                printw("KEY_LEFT : %d\n", c);
                break;
            case KEY_RIGHT:
                printw("KEY_RIGHT : %d\n", c);
                break;
            default:
                printw("Keyboard code %d\n", c);
        }
    }

    // cbreak(); // disable puffer (input direct printed)
    // nobreak(); // back - buffer

    endwin();
    return 0;
}
