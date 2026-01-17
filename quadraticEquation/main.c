#include <stdio.h>
#include <math.h>

int main(void) {
    double a = 1.2;
    double b = 2.3;
    double c = -3.4;
    double x = 1.4;

    double ans = a*pow(x, 2) + b*x + c;
    printf("ans = %f", ans);
    return 0;
}