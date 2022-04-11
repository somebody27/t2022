#include <stdio.h>
void
swap ( int *a, int *b ){
    int *temp;
    temp = NULL;
    temp = a;
    a = b;
    b = temp; 
}
int
main ( int argc, char **argv ){
    int a,b;
    a = 16;
    b = 32;
    printf("a = %p,  b = %p\n", &a , &b );
    swap(&a, &b);
    printf("a = %p,  b = %p\n", &a , &b );   
    printf("a = %d,  b = %d\n", a , b );
}
