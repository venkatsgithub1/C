#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double *data;
    int nrows;
    int ncols;
} Matrix;

void printMatrix(Matrix *M);

void matrixMult(Matrix *A, Matrix *B, Matrix *C);

Matrix *createMatrix(int nrows, int ncols);

void destroyMatrix(Matrix *M);

int main(int argc, char *argv[]) {
    Matrix *A = createMatrix(3, 2);
    A->data[0] = 1.2;
    A->data[1] = 2.3;
    A->data[2] = 3.4;
    A->data[3] = 4.5;
    A->data[4] = 5.6;
    A->data[5] = 6.7;
    printMatrix(A);


    Matrix *B = createMatrix(2, 3);
    B->data[0] = 5.5;
    B->data[1] = 6.6;
    B->data[2] = 7.7;
    B->data[3] = 1.2;
    B->data[4] = 2.1;
    B->data[5] = 3.3;
    printMatrix(B);

    Matrix *C = createMatrix(3, 3);
    matrixMult(A, B, C);
    printMatrix(C);

    destroyMatrix(A);
    destroyMatrix(B);
    destroyMatrix(C);
    return 0;
}

Matrix *createMatrix(int nrows, int ncols) {
    Matrix *matrix = malloc(sizeof(Matrix));
    matrix->data = malloc(sizeof(double) * nrows * ncols);
    matrix->nrows = nrows;
    (*matrix).ncols = ncols;
    return matrix;
}

void destroyMatrix(Matrix *M) {
    if (M == NULL) {
        return;
    }
    free(M->data);
    free(M);
}

void printMatrix(Matrix *M) {
    int i, j;
    printf("[");
    for (i = 0; i < M->nrows; i++) {
        for (j = 0; j < M->ncols; j++) {
            printf("%6.3f ", M->data[i * (*M).ncols + j]);
            printf("%6.3f ", *((*M).data + (i * (*M).ncols + j)));
        }
    }
    printf("]\n");
}

void matrixMult(Matrix *APtr, Matrix *BPtr, Matrix *CPtr) {
    Matrix A = *APtr;
    Matrix B = *BPtr;
    if (A.ncols != B.nrows) {
        printf("Error: ncols of A does not equal nrows of B\n");
    } else {
        int i, j, k;
        double value;
        for (i = 0; i < A.nrows; i++) {
            for (j = 0; j < B.ncols; j++) {
                value = 0.0;
                for (k = 0; k < A.ncols; k++) {
                    value += A.data[i * A.ncols + k] * B.data[k * B.ncols + j];
                }
                (*CPtr).data[i * A.nrows + j] = value;
            }
        }
        CPtr->nrows = A.nrows;
        CPtr->ncols = B.ncols;
    }
}
