#include <stdio.h>

int isPrime(int number);

int main(void) {
    int n = 10;
    int count = 0;
    int number = 2;

    while (count < n) {
        if (isPrime(number)) {
            count++;
            if (count == n) {
                printf("%d is the prime number %d\n", number, n);
                break;
            }
        }
        number++;
    }
    return number;
}

int isPrime(int number) {
    if (number < 2) {
        return 0;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}
