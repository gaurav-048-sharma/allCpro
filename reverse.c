#include<stdio.h>
int main() {
    int n,remainder,reverse=0;
    printf("Enter three digit number: ");
    scanf("%d", &n);
    
    for(int i=0; i<=n; i++) {
        remainder = n % 10;
        reverse = reverse * 10+ remainder;
        n = n/ 10;
    }
    printf( "The reverse is %d\n" , reverse);
}