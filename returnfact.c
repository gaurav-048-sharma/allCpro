#include<stdio.h>
int factorial();
int main()
 {
    int n=0;
    printf("enter a value: ");
    scanf("%d", &n);
    
    int fact = factorial(n);
    printf("%d", fact);
}

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
    f = f * i;
    }
    return f;
}
//with 