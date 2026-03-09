#include<stdio.h>

int main(void) {
    int age = 30;
    int *p;
    p = &age;
    printf("age is %d", age);
    printf("p is %d\n", p);
    printf("*p is %d\n", *p);
    printf("sizeof p: %ld\n", sizeof(p));
    *p = 40;
    printf("*p is %d\n", *p);
    printf("age is %d", age);
}