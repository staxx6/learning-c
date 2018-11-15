/*
    Control the time between steps
*/

#include <time.h>

/* 
    nsec max: 999'999'999 (1ns shorter as 1sec)
    1s   = 1000000000 ns
    0.5s =  500000000 ns
    0.1s =   10000000 ns
*/
struct timespec ts;

void step(int sec, long nsec) {
    ts.tv_sec = sec;
    ts.tv_nsec = nsec;

    nanosleep(&ts, NULL);
}