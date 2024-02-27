#include<stdio.h>
#include<math.h> 
int angstrong(int x);

int main() { 
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    angstrong(x);
}
int angstrong(int x) {
    int i ,s,y,t;
    
    for(i=0; i<x;i++) {
        s=0;
        y=i;
        while (y!=0)
        {
            t=y%i;
            s=s+(t*t*t);
            y=y/10;
        }
    
    // f=(pow(c,3))+(pow(a,3)+(pow(d,3)));
    if(i==s) {
        printf("%d ", s);
    } 
    }

    return 0;
}