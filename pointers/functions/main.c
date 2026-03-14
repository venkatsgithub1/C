#include<stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

void operate(int (*fn)(int, int), int a, int b) {
    int res = fn(a, b);
    printf("result: %d\n", res);
}

int main(void) {
    operate(add, 2, 3);
    operate(subtract, 5, 4);
    operate(multiply, 6, 7);
    return 0;
}
