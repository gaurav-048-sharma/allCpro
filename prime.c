#include<stdio.h>
int main() {
    int x=0, i,k=0,c =0;
    printf("enter a number ");
    scanf("%d", &k);
    for(x=1;x<k;x++) {

    
    for(i=2;i<=x; i++) { //i is less than x
        if(x%i==0) {
            printf("not prme");
            break;
        }
    }
    if(i==x) {            // if x becomes equal to i then it is prime because for eg:- when x=7
                           // i= 2, i=3, i=4, i=5, i=6, when thr for l00p doesnt terminate then if(i==x) is printed
       printf("prime");
    //    printf("%d ", x);
    //    c++;
    }
    }
    //printf("\ntotal numbers are %d", c);
}