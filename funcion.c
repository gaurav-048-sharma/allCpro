// Function definition?
// In c programing  a function is a block of code that performs a specific task. it allows for code reusebility and modularity
// C functions  can be classified into two cate:
        // 1)User defined and, 2)library functions 
//  Syntax

//   return-type function-name(Params) {
//        //code to be exected
//       return value;
//}
#include<stdio.h>
int add (int a,int b) {
       int sum=a+b;
       return sum;
        
}
int main() {
    
    add (4,5);
    
     printf("%d",sum);
   return 0;
}