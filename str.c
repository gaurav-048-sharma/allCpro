#include<stdio.h>
#include<String.h>
int main() {
    char a[10], t;
    puts("enter a string ");
    gets(a);
    int l = strlen(a);
    for(int i=0; i<l/2; i++) {
        // t = a[i];
        // a[i] = a[l-1-i];
        // a[l-1-i] =t;
        if(a[i] = a[l-1-i]) {
            printf("\nstring is palindrome");
            break;
        }
        if(i==l/2) {
            printf("\nstring is not palindrome");
        
        }
    }
    // gets(t);

   // printf("revese %d",strlen(a) );
    //printf("revese %s", a);
    // if(a==l) {
    //     printf("\nstring is palindrome");
    // }
    // else {
    //     printf("\nstring is not palindrome");
    // }
}