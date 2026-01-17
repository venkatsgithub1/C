#include <stdio.h>
#include <math.h>

int main(void) {
    double a = 1.2;
    double b = 2.3;
    double c = -3.4;

    double ans1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    double ans2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    printf("ans1 = %f\n", ans1);
    printf("ans2 = %f\n", ans2);
    return 0;
}
