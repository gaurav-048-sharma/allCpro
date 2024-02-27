#include<stdio.h>

int prime(int x);

void main()
 {
    int x;
    printf("enter a number ");
    scanf("%d", &x);
    prime(x);

}

int prime(int x) {
    int i;
   for(i=2; i<=x; i++) { 
        if(x%i==0) {
            printf("not prme");
            break;
        }
    }
    if(i==x) {            
       printf(" the number is prime");
      
    }
{ 
return i;
}
}
// with argument and with return