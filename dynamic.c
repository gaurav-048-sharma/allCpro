#include<stdio.h>
#include<stdlib.h>
int main() {
    int *g, *x;
    g= (int *) malloc(sizeof(int));
    *g=56;

    x= (int *) calloc(6, sizeof(int));
    *x=28;
    *(x+3) = 42;
    *(x+0) = 22; 
    printf("Enter the value of g: %d %d %d", *x,*(x+2), *(x+3));

   x=  (int *)realloc(x,9);
   *(x+7) = 33;
   free(x)
}