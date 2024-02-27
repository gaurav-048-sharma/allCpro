#include<stdio.h>
int fibonacci(int x);
int main() {
    int num=0;
    printf("enter the number: ");
    scanf("%d", &num);
    fibonacci(num);
}
int fibonacci(int x) {
    int a=0, b=1, c;
    printf("%d ", a);
    printf("%d ", b);
    for(int i=1; i<=x; i++) {
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }
}
