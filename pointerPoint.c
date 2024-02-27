#include<stdio.h>
// increment => ptr++
// decreament  => ptr--
void point() {
    int *ptr = (int *)1000;
    ptr = ptr -3;
    printf("the  value of ptr %u",ptr);
}
// adding integer to value with pointer 
void adding() {
    int num, *ptr1, *ptr2;
    ptr1 = &num;
    ptr2 = ptr1+2;
    printf("%d", ptr2- ptr1);
}
// subtracting with integer value with pointer 
// int subtracting() {
//     int *ptr1;
//     float *ptr2;
//     ptr1 = (int *)1000;
//     ptr2 = (float *)3000;
//     printf("%d\n", ptr1);
//     printf("%d\n", ptr2);
//     if(ptr2 > ptr1) {
//         printf("ptr2 is far from ptr2");
//     }
//}


// a ptop is used when we want to store the address of another pointer
//the first pointer ptr is use to store the address of the variable
//the second pointer p2 stores the address of the first pointer ptr
int ptop() {
    int a = 723;
    int *ptr;
    int **p2;
    ptr = &a;
    p2 = &ptr;
    printf("the valu of %d\n", a);
    printf("the valu of single pointerr %d\n", *ptr);
    printf("the valu of double pointer %d\n", **p2);
}    
void main() {
    ptop();
}

