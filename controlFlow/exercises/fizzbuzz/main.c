#include <stdio.h>

int main(void) {
    int LIMIT = 100;
    int i = 1;
    while (i <= LIMIT) {
        if (i % 3 == 0) {
            printf("fizz\n");
        } else if (i % 5 == 0) {
            printf("buzz\n");
        } else {
            printf("fizzbuzz\n");
        }
        i++;
    }
    return 0;
}
