/*
 * Stack implementation with an array
 * from http://www.zentut.com/c-tutorial/c-stack-using-array/
 * 
 * Top is NOT a pointer! It's only passed as pointer. = Index number
 */
#include <stdio.h>

void init(int *top) {
    *top = 0;
}

void push(int *s, int *top, int element) {
    printf("%d\n", *top);
    s[(*top)++] = element;
}

int pop(int *s, int *top) {
    return s[--(*top)];
}

int full(int *top, const int size) {
    return *top == size ? 1 : 0;
}

int empty(int *top) {
    return *top == 0 ? 1 : 0;
}

void display(int *s, int *top) {
    printf("Stack: ");
    int i;
    for(i = 0; i < *top; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
}

int main(void) {
    const int SIZE = 5;

    int top, elem;
    int stack[SIZE];

    init(&top);display(stack, &top);
    printf("--Push elements into stack --\n");
    while(!full(&top,SIZE)) {
        printf("Enter a number to push into the stack:");
        scanf("%d", &elem);
        push(stack, &top, elem);
        display(stack, &top);
    }
    printf("Stack is full\n\n");

    printf("--Pop elements into stack --\n");
    while(!empty(&top)) {
        elem = pop(stack,&top);
        printf("pop %d from the stack\n", elem);

        display(stack,&top);
    }
    printf("Stack is empty\n");

    return 0;
}