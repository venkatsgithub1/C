#include <stdio.h>

int main() {
    printf("%d\n", 1 + 2);
    printf("%f\n", 6 / 4.0);
    printf("%d\n", 6 * 4);
    printf("%d\n", 6 - 4);
    signed int a = 5;
    float b = 6.0;
    signed int c = 7;
    // (a+b)^2
    printf("%f\n", a * a + 2 * a * b + b * b);
    printf("%f\n", a * (b + c)); // 65, because operation inside parantheses executes first
    return 0;
}
