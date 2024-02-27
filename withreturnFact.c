#include<stdio.h>
int factorial();
int main()
 {
    
    int fact = factorial();
    printf("%d", fact);
}

int factorial() {
    int f = 1, n=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i= 1; i<= n; i++) {
    f =f * i;
    }
    return f;
}

//without params with return