#include<stdio.h>
int even(int n);
int main() {
    even(10);
}
int even(int n) {
    for(int i=1;  i<=n; i++) {
        n = n+2;
        return n
    }
}