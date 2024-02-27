#include<stdio.h>

int primee(int x);

int main() {
    int x;
    printf("enter a number ");
    scanf("%d", &x);
    primee(x);
}

int primee(int x) {
    int i;
   for(i=2; i<=x; i++) { 
        if(x%i==0) {
            printf("not prme");
            break;
        }
    }
    if(i==x) {            
       printf("prime");
       
    }
}
