#include<stdio.h>
int prime(int k);
int main() {
    int k=0;
    printf("enter a number ");
    scanf("%d", &k);
    prime(k);
}
int prime(int k) {
    int x, i;
    for(x=1;x<k;x++) {
    for(i=2;i<=x; i++) { 
        if(x%i==0) {
             break;
        }
    }
    if(i==x) {           
       printf("%d ", x);
    }
    }
}
//with arg but without return