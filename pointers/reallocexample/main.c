#include<stdio.h>
#include<stdlib.h>

void printArr(float arr[], int n) {
    printf("start---\n");
    for (int i = 0; i < n; i++) {
        printf("%f\n", arr[i]);
    }
    printf("end---\n");
}

int main(void) {
    float *arr1;
    arr1 = calloc(3, sizeof(float));
    arr1[0] = 3.14;
    arr1[1] = 3.15;
    arr1[2] = 3.16;
    printArr(arr1, 3);
    arr1 = realloc(arr1, 5 * sizeof(float));
    arr1[4] = 3.18;
    printArr(arr1, 5);
    free(arr1);
}
