#include <stdio.h>

int fibonacci(int n);

int main(void) {
    int n = 10;
    printf("%d\n", fibonacci(n));
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}
