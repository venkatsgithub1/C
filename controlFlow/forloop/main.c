#include <stdio.h>

int main() {
    int cumsum = 0;
    int i;
    for (i = 1; i <= 100; i++) {
        cumsum += i;
    }
    printf("sum: %d\n", cumsum);
}