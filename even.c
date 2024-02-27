#include<stdio.h>
int eveOdd();
//without argument and without return;

int main() {
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    //int sum =eveOdd(x);
    int sum = eveOdd();
    printf("%d", sum);
}


int eveOdd() {
    int count= 10;
    printf("even values : ");
    for(int i=1; i<=count; i++) {
    if(i%2==0) {
        printf("%d ",i);   
    }
    
    }

}

//   printf("\n");
//  printf("odd values : ");
//   for(int i=1; i<=x; i++) {
//     if(i%2!=0) {
//         printf("%d " ,i);
//     }
//   }