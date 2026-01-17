#include <stdio.h>

int main(void) {
    double fahrenheit = 98.6;
    double celsius = (fahrenheit - 32.0) / 1.8;
    printf("temperature in fahrenheit: %f, in celsius: %f", fahrenheit, celsius);
    return 0;
}