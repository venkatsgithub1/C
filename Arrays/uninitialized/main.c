#include <stdio.h>

int main(void) {
    int anArray[5];

    // let us print and see what the array has.
    for (int i = 0; i < 5; i++) {
        // different results may appear.
        printf("index %d, number: %d\n", i, anArray[i]);
    }
    return 0;
}
