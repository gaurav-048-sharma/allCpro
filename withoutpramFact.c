#include<stdio.h>
int factorial();
int main() {
    factorial();
}
int factorial() {
    int f = 1, n=5;
    for(int i=1; i<=n; i++) {
        f=f*i;
    }
    printf("%d", f);
}
//without params without return