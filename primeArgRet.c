#include<stdio.h>
#include<stdbool.h>
bool prime(int num);

bool prime(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i=2; i<=num/2; i++) {
        if(num%i==0) {
        return false;
    }
    }
    return true;
}
int main() {
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    if(prime(num)) {
        printf("prime");
    } else {
        printf("not prime");
    }
}