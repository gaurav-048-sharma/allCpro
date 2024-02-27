#include<stdio.h>
float area(float r);
void main() {
    float r, x;
    printf("Enter the radius: ");
    scanf("%f", &r);
    x = area(r);
    printf("\nThe area of circle is %f\n", x);
}
float area(float r) {
    float x;
    x= 3.14*r*r;
    return x;
}

