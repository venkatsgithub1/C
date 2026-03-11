#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int *vec;
    vec = malloc(sizeof(int) * 3);
    vec[0] = 10;
    vec[1] = 20;
    vec[2] = 30;
    printf("index 2 val using pointer arithmetic: %d\n", *(vec + 2));
    free(vec);
    return 0;
}
