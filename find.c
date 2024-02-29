#include<stdio.h>
int main() {
    int a;
    printf("The value of variable 'a': ");
    scanf(" %d", &a);
    if(a<0) {
        printf("nagetive");
    } else {
        printf("positive");
    }
}