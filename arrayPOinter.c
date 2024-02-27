#include<stdio.h>
int some() {
    int marks;
    printf("Input the marks of student : ");
    scanf("%d",&marks);
   if(marks>0 && marks<30) {
    printf("The student is graded C");
   } else if(marks>=30 && marks<60) {
       printf("The student  is graded B");
     } else if(marks>=60 && marks <70 ) {
 printf("The  student is graded B+");
 } else if(marks >=70 && marks <80) {
    printf("The  student is graded A");
   } else if(marks >=80 && marks <=100){
    printf("The  student is graded A+");
   }
   else {
    printf( "The input is invalid");
}
}

void main() {
    // int *arr[4];
    // int i=21,j=36, k =8, l = 51, m;
    // arr[0] = &i;
    // arr[1] = &j;
    // arr[2] = &k;
    // arr[3] = &l;
    // for(m=0; m<=3; m++) {
    //     printf("Value of element : %d\n", *arr[m]);
    // }
some();
}
//local to the block in which varibale is diefined  and scope of that variable is limited within that block only.
// life: tild the contol remains within the block in which varibale is defined 
//th key for this storage class is auto;