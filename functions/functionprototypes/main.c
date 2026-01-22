#include <stdio.h>

void sayHello();

int main(void) {
    sayHello();
    return 0;
}

void sayHello() {
    printf("A function saying hello, which was initially a prototype\n");
}