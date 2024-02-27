#include<stdio.h>
int incrment() {
    int a = 2;
    //int b = a++;
    printf("%d %d %d %d",++a, a++, --a, a--);
}
int incrmentsum() {
     int a = 7;
    int b = ++a;
    printf("%d\n", b);
}
int main() {
    incrment();
    //incrmentsum();
}