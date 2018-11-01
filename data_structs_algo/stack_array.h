#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

void init(int *top);
void push(int *s, int *top, int element);
int pop(int *s, int *top);
int full(int *top, const int size);
int empty(int *top);
void display(int *s, int *top);

#endif STACK_ARRAY_H_ /* _STACK_ARRAY_H */