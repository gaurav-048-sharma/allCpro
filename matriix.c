#include<stdio.h>
#include <string.h>
int main() {
    // int matrix[][] = new int[3][3];
    int matrix[3][3];
        /// int key = 9;
        int n = strlen(matrix[0]), m = strlen(matrix[0]), c;
        
        printf("Enter the elements of matrix:\n: ");
        scanf("%d", &c);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = c.nextInt();
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
               
                printf("%d",matrix[i][j] );
            }
            printf("\n");
        }
}