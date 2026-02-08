#include<stdio.h>

typedef struct Matrix {
    double data[1024];
    int nrows;
    int ncols;
} Matrix;

void printMatrix(Matrix matrix) {
    for (int i = 0; i < matrix.nrows; i++) {
        for (int j = 0; j < matrix.ncols; j++) {
            printf("%lf ", matrix.data[i * matrix.ncols + j]);
        }
        printf("\n");
    }
}

Matrix multiplyMatrices(Matrix matrix1, Matrix matrix2) {
    // [1 2 3]  [1 2]
    // [4 5 6]  [3 4]
    //          [5 6]
    Matrix result = {};
    for (int i = 0; i < matrix1.nrows; i++) {
        for (int j = 0; j < matrix1.ncols; j++) {
            double value = 0;
            for (int k = 0; k < matrix2.ncols; k++) {
                value += matrix1.data[i * matrix1.ncols + k] * matrix2.data[k * matrix2.ncols + j];
            }
            result.data[i * matrix1.ncols + j] = value;
        }
    }
    result.nrows = matrix1.nrows;
    result.ncols = matrix2.ncols;
    printf("%d\n", result.nrows);
    printf("%d\n", result.ncols);
    return result;
}

int main(void) {
    Matrix matrix = {{1.2, 2.3, 3.4, 4.5, 5.6, 6.7}, 2, 3};
    Matrix matrix2 = {{1.2, 2.3, 3.4, 4.5, 5.6, 6.7}, 3, 2};
    printMatrix(matrix);
    Matrix result = multiplyMatrices(matrix, matrix2);
    printMatrix(result);
    return 0;
}
