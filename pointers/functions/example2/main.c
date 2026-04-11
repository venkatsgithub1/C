#include<stdio.h>
#include<stdlib.h>

int compare_ints(const void *a, const void *b) {
    // cast
    int inta = *(const int *) a;
    int intb = *(const int *) b;
    // compare a and b
    if (inta < intb) {
        return -1;
    }
    if (inta > intb) {
        return 1;
    }
    return 0;
}

int compare_doubles(const void *a, const void *b) {
    // cast
    double doublea = *(const double *) a;
    double doubleb = *(const double *) b;
    if (doublea < doubleb) {
        return -1;
    }
    if (doublea > doubleb) {
        return 1;
    }
    return 0;
}

int main(void) {
    int data[] = {10, 6, 7, 8, 1, 5};
    int lenOfArray = sizeof(data) / sizeof(data[0]);
    qsort(data, lenOfArray, sizeof(int), compare_ints);
    for (int i = 0; i < lenOfArray; i++) {
        printf("%d\n", data[i]);
    }
    printf("---\n");

    double doubleData[] = {1.4, 1.9, 0.5, 0.2, 1.8};
    int lenOfDoubleArray = sizeof(doubleData) / sizeof(doubleData[0]);
    qsort(doubleData, lenOfDoubleArray, sizeof(double), compare_doubles);
    for (int i = 0; i < lenOfDoubleArray; i++) {
        printf("%.2f\n", doubleData[i]);
    }
    printf("---\n");
    return 0;
}
