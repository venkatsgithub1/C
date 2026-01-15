#include <stdio.h>

int main() {
    signed int a = 5;
    signed int b = 6;
    signed int c = 0;
    printf("a&&b=%d\n", a && b);
    printf("b&&c=%d\n", b && c);
    printf("b||c=%d\n", c || b);
    return 0;
}
