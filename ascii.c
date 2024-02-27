#include<stdio.h>
// struct manoj {
//     int a =10;
//     float b=10.1;
// };
struct student {
    char name[50];
    int age;

}; 
int mi() {
   int x;
   for(x=-1; x<=10; x++) {
    if(x<=5) {
        continue;
        

    } else {
        break;
        printf("hek");
    }
    printf("hek");
   }
}
void main() {
    mi();
    char ch ='A';
    //struct manoj w;
    printf("A=%d ", ch);
    for(int i=1; i<=10; i++) {
        ch++;
        printf("%c=%d ", ch, ch);
    }
    // printf("%d", ch);
    // ch++;
}