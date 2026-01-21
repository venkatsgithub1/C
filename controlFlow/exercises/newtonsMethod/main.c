#include <stdio.h>

double calculateNewtons(double x) {
    double guess = x / 2;
    for (int i = 0; i < 5; i++) {
        guess = 0.5 * (guess + x / guess);
    }
    return guess;
}

int main(void) {
    double num = 612;
    printf("guess after 5 iterations: %f", calculateNewtons(num));
}