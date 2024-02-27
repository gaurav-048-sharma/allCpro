#include<stdio.h>
int main() {
    int arr[5];
    printf("array: ");
    scanf("%d %d %d %d %d", &arr[0],&arr[1], &arr[2],&arr[3],&arr[4]);
    printf("\n&arr[0] = %d\n &arr[1]= %d\n &arr[2]= %d\n &arr[3]= %d\n &arr[4]= %d\n", arr[0],arr[1], arr[2], arr[3], arr[4]);
    return 0;
}