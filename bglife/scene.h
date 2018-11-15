#ifndef SCENE_H
#define SCENE_H

typedef enum state {
    RUNNING, BACKGROUND, IDLE, DESTROY
} State;

typedef struct scene {
    char *name;
    State active;
} Scene;

#endif /* SCENE_H */