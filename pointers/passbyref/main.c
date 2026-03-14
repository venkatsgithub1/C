#include<stdio.h>
#include <stdlib.h>

void makeDouble(int *y) {
    *y = 2 * *y;
}

int main(void) {
    int y = 50;
    int *z;
    z = malloc(sizeof(int));
    *z = y;
    makeDouble(z);
    printf("y after calling makeDouble: %d\n", y);
    free(z);
    return 0;
}
