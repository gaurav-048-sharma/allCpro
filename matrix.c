//Write a programm to find the sum of l*m?
#include<stdio.h>
int main() {
    int l[10][10], m[10][10];
    int a, b, row, col;
    printf("enter the number a, b: ");
    scanf("%d %d", &a, &b);
    for(row=0; row<a; row++) {
        for(col=0; col<b; col++) {
            scanf("%d", &l[row][col]);
            printf("%d ",  l[row][col]);
        }
        for(col=0; col<b; col++) {
            scanf("%d", &m[row][col]);
            printf("%d ",  m[row][col]);
        }
        
    }
    
}