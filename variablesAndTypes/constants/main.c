#include <stdio.h>
const int constant_year = 2026;
const int hex_year = 0x7ea;

int main() {
    printf("%d\n", constant_year);
    printf("%d\n", hex_year);
    const signed int prev_year = 2025;
    printf("%u\n", prev_year);
}
