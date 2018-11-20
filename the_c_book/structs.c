#include <stdio.h>

typedef struct Point {
    int x;
    int y;
} Point;

Point makepoint(int x, int y) {
    Point temp;
    printf("%d\n", &temp);

    temp.x = x;
    temp.y = y;
    return temp;
}

int main(void) {

    Point p = makepoint(5, 10);
    printf("%d\n", &p);
    printf("%d %d\n",p.x, p.y);

    return 0;
}