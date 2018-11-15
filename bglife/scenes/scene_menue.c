#include "../scene.h"

Scene scene;

void init() {
    scene.name = "menue";
    scene.active = IDLE;
}

int update(void) {
    printf("stuff 1\n");
    printf("stuff 2\n");
    return 0;
}