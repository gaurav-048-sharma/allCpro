#include<stdio.h>
int increament();
int fun1() {
    auto int i ,j;
    printf("%d %d", i, j);
}
int fun() {
    auto int i =3;
    {
        auto int i =2;
        {
            auto int i =1;
            printf("%d", i);
        }
        printf("%d", i);
    }
    printf("%d", i);
}
int registered() {
    register int i;
    for(i=0; i<=10; i++) {
        printf("%d", i);
    }
}
// int increament(int n) {
//     if(n == 1) {
//         return 1;
//     }
//     int f =n * increament(n-1);
//     return f;
// }
int increament() {
    auto int i=1;
    static int j =1;
    i= i+1;
    j= j+1;
    printf("%d\t %d\n", i,j);
}
int some() {
   
    int marks;
    printf("Input the marks of student : ");
    scanf("%d",&marks);
   if(marks>0 && marks<50) {
    printf("fail");
   } else if(marks>=50 && marks<60) {
       printf("good");
    
   } else if (marks>=60 && marks <=70 ) {

      printf("Very good");
   }else if (marks >=70 && marks <80){
    printf("best");
   }else if (marks >=80 && marks <=100){
    printf("better");
   }
   else {
    printf( "Excellent" );
   }
   
}
int main() {
    some();
}