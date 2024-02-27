#include<stdio.h>
struct student {
    int b_id;
    float b-price;
    // int marks;
    // float per;
    // int age;
    // char name[10];
    // // char per[];
};
int main() {
    struct student s1, b1, b2;
    printf("Enter the details of a student:\n");
    printf("%d %f %d %s", s1.marks, s1.per, s1.age, s1.name[10]);
    scanf("%d %.2f %d %s", &s1.marks, &s1.per, &s1.age, s1.name);
    return 0;
    //printf("%d", sizeof(s1.roll));
}
/// printf("helllo");