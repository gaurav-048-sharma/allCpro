#include<stdio.h>
int home() {
    int a=10, *b ,c,d;
    b = &a;
    c = *b;
    d = c;
    printf("%d\n", a); 
    printf("%d\n", c);
    printf("%d\n", d);
}
int point() {
    int a = 5;
    int *b;
    b= &a;
    printf("%d\n", *b+10);
    printf("%d\n", *b+*b);
    printf("%d\n", *b*(*b));
    printf("%d\n", *b/(*b));
}
int operator() {
    int a = 5;
    int *b;
    b= &a;
    printf("%d\n", --*b);
    printf("%d\n", *b + *b);
    printf("%d\n", *b / *b);
    printf("%d\n", *b + *b);
    printf("%d\n", *b / *b);
    printf("%d\n", *b += *b);
    printf("%d\n", *b *= *b);
    printf("%d\n", *b /= *b);
    printf("%d\n", --*b);
}

// increment => ptr++
// decreament  => ptr--
// adding integer to value with pointer 
// subtracting with integer value with pointer 
// difference pointer  
// pointer comparison
int main() {
    operator();  
}



// int a = 2;
    // int *b = &a;
    // int **p = &b;
    // int ***s = &p;
    // int ****d = &s;
    // printf("%d %d\n", *b, &b);
    // printf("%d\n", **p);
    // printf("%d\n", ***s);
    // printf("%d", ****d);