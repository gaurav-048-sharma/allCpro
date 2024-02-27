#include<stdio.h>

int main() {
    int n=0 ; 
    char p = 'A';
    printf("Enter a number: ");
    scanf("%d", &n);
     for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            // printf("%d", j);   12345
             printf("%c",p);    //1234
             p++;               //123
            // if(j>=5-i && j<=3+i) {
            //     printf("*");
            // } else {
            //     printf(" ");
            // }
        
        }
        //p++;
        // for(int k=1; k<= 2*i-1; k++) {
        //     printf("*");
        // }
        printf("\n");
        //p='A';
    }
    //p++;
    // int x, y=1,i, s=1; 
    // printf("enter a number ");
    // scanf("%d", &x);
    // printf("enter a number ");
    // scanf("%d", &y);
    // for(i=1; i<=y; i++) {
    //     s= s*x;
    //     printf("%d ", x);
    //     printf("%d ", s);
    // }
    // printf("\npower %d", s);
    // int x, i , s=1;
    // printf("enter a number ");
    // scanf("%d", &x);
    // for(i=1; i<=x; i++)  {
    //     s= s*i;
        
    // }
    // printf("%d ", s); 
    //fibonacci series
    // int n=0, a=-1, b=1, c, i;
    
    // printf("enter a range");
    // scanf("%d", &n);
    // for(i=0; i<n; i++) {
    //     c=a+b;
    //     printf("%d ", c);
    //     a=b;
    //     b=c;
}

