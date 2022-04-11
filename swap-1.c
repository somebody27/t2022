#include <stdio.h>
void
swap ( int **a, int **b ){
    int *temp = NULL;
    temp = *a;
    *a = *b;
    *b = temp; 
}
int
main ( int argc, char **argv ){
    int c = 16;
    int d = 32;
    int *a = &c;
    int *b = &d;
    printf("a = %p,  b = %p\n", a , b );
    swap(&a, &b);
    printf("a = %p,  b = %p\n", a , b );
    printf("a = %d,  b = %d\n", *a , *b );
}
