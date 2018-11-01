#include <stdio.h>

typedef struct _list {
    struct _list *next;
    void *element;
} list;

static list *root = NULL;

static list *list_add(list *new_element) {
    list *lptr;

    if(root == NULL) return NULL;
    for(lptr=root; lptr->next; lptr=lptr->next)
        ;
    lptr->next = calloc(1, sizeof(list));
    lptr->next->element = new_element;  
    return lptr->next;
}

int main(void) {
    list first;
    first.next = NULL;
    first.element = 5;

    root = &first;

    return 0;
}