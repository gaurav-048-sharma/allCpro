#include<stdio.h>
int prime();
int main() {
    
    prime();
}
int prime() {
    int x, i,k=10;
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
// without argument and without return