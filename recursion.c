#include<stdio.h>
#include<math.h>
int fact(int n);
// int sum(int n) {
//     int s =1;
//     // if(n==1) {
//     //     return 1;
//     // }
//     for(int i=0; i<=n; i++) {
//         int s = s*sum(n-1);
//         return s;
//     }
    
    
// }
// int fact(int n){
//     if(n==1) {
//         return 1;
//     }
//     int result = n+fact(n-1);
//     return result;
// }
int main() {
    // int n, p, result, s=1;
    // printf("enter a number: ");
    // scanf("%d", &n);
    // printf("enter the power: ");
    // scanf("%d",&p);
    // for(int i=1; i<=p; i++) {
    //     s=s+n;
    // }

    // //result = pow(n, p);
    // printf("%d ", s);
    int fct = fact(10);
    printf("%d", fct);
    

}
int fact(int n) {
    //int f=1;
    if(n==0) {
        return 1;
    }
     int f = n+fact(n-1);
     return f;
}