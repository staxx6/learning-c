#include <stdio.h>

int main(void) {

    char a[] = "hello";
    char b[] = "world";
    char c[] = "wuff";

    char *arr[] = {a, b, c};
    char **ptr = arr+1;

    int ax = 5;
    int *ax_ptr = &ax;
    int **ax_ptr_ptr = &ax_ptr;
    int ***ax_ptr_ptr_ptr = &ax_ptr_ptr;

    int bx = 5;
    int *bx_ptr1 = &bx;
    int **bx_ptr2 = &bx_ptr1;
    int **bx_ptr3 = bx_ptr2;

    bx_ptr2 = bx_ptr3;

    printf("0: %s\n", *(arr));
    printf("1: %s\n", *(arr+1));
    printf("2: %s\n", *(arr+2));

    printf("**ptr = arr+1: %s\n", *ptr);

    printf("**ax_ptr_ptr = ax_ptr: %d\n", **ax_ptr_ptr);
    printf("***ax_ptr_ptr = ax_ptr: %d\n", ***ax_ptr_ptr_ptr);

    printf("\n");

    printf("**bx_ptr2 = recursive pointer? %d\n", **bx_ptr3);

    return 0;
}