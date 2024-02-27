#include<stdio.h>
int prime(int n);
int main() {
    int n=0, i;
    printf("Enter the number : ");
    scanf("%d", &n);
    prime(n);
}
int prime(int num) {
    int i;
   if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                printf("%d is not a prime number.\n", num);
                break;
            }
        }

        if (i > num / 2) {
            printf("%d is a prime number.\n", num);
        }
    }
}