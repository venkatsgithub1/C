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

int main(void) {
    Matrix matrix = {{1.2, 2.3, 3.4, 4.5, 5.6, 6.7}, 3, 2};
    printMatrix(matrix);
    return 0;
}
