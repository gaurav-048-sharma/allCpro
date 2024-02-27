//write a c program for fibonacci series
//Difference btween entry controlled loop and exit controlled loop with example
//write a snippet code by taking a input form the user using entry control loop for finding sumation of n numbers
// why do we need fuctions explain in details
//write a c program using function to reverse the numbers 
//Explain the concept of arrays along with the different way of declaration and initialisation 
//write the snippt code to find transpose of a matrix andexplain to which dimentional array it belongs to with examples
//how are the values stored in array explain with examples
//explain the relationship between array and pointers with examples 
//explain poiters to pointers with examples
#include<stdio.h>
int main() {
    int a[20][20] , b[20][20], m,n,i, j;
    printf("enter the row and cols: ");
    scanf("%d %d",&m, &n );
    printf("enter the element matrix: ");
    for(i=0; i<=m; i++) {
        for(j=0; j<=n; j++) {
            scanf("%d\n", &a[i][j]);
        }
    }
    printf("enter the element of matrix: ");
    for(i=0; i<=m; i++) {
        for(j=0; j<=n; j++) {
            printf("%d\t", a[i][j]);
        }
    }
    printf("matrix transpose");
    for(i=0;i<=m;i++) {
        for(j=0;j<=n; j++) {
            b[j][i] = a[i][j];
        }
    }
    printf("the transpose of matrix is : ");
    for(i=0; i<=m; i++) {
        for(j=0; j<=n; j++) {
            printf("%d\t", b[i][j]);
        }
    }
}
