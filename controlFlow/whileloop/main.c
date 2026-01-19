#include <stdio.h>

int main(void) {
    int cumsum = 0;
    int i = 0;
    while (i <= 10) {
        cumsum += i;
        i++;
    }
    printf("sum: %d\n", cumsum);
    cumsum = 0;
    i = 1;
    do {
        cumsum += i;
        i++;
    } while (i <= 10);
    printf("sum: %d\n", cumsum);
    return 0;
}