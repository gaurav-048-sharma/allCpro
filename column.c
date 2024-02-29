#include<stdio.h>
int main() {
    int a[20][20], m, n, i ,j;
    printf("Enter the rows and columns: ");
    scanf("%d %d", &m,&n);
    printf("enter the elements: ");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements are:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
// #include<stdio.h> 
// void main() {
// int a[20 ][20]m,n,i,j;

// printf(“enter the row and column size\n”); 

// scanf(“%d%d”,&m,&n);
// printf(“Enter the elements of matrix\n”); 
// for(i=0;i<m;i++) {
// for(j=0;j<n;j++) {
// scanf("%d", &a[i][j]);
// }
// }
// printf(“The elements of matrix are\n”); 
// for(i=0;i<m;i++) {
// for(j=0;j<n;j++) {
// printf("%d\t", a[i][j]);
// }
// printf(“\n”);
// }
// }
