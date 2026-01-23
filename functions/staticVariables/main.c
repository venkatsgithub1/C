#include <stdio.h>

void increment() {
    static int num = 0;
    num++;
    printf("%d\n", num);
}

int main(void) {
    increment();
    increment();
    increment();
    increment();
    increment();
    printf("num variable value is persisted for the next function call");
}