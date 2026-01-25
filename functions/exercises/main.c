#include <stdio.h>
#include <math.h>

void findPrimeNumbersUpto(int n);

int main(void) {
    findPrimeNumbersUpto(10);
    findPrimeNumbersUpto(15);
    return 0;
}

void findPrimeNumbersUpto(int n) {
    int primeArr[n + 1];
    primeArr[0] = 0;
    primeArr[1] = 0;
    for (int i = 2; i <= n; i++) {
        primeArr[i] = 1;
    }
    double sqrtn = sqrt(n);
    for (int i = 2; i <= sqrtn; i++) {
        if (primeArr[i]) {
            for (int j = i * i; j <= n; j += i) {
                primeArr[j] = 0;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (primeArr[i] == 1) {
            printf("%d\n", i);
        }
    }
    printf("------\n");
}
