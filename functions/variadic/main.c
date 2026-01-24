#include <stdio.h>
#include <stdarg.h>

double mean(int count, ...);
double median(int count, ...);

int main(void) {
    double mean_calculated = mean(5, 1, 2, 3, 4, 5);
    printf("mean calculated:%f\n", mean_calculated);
    mean_calculated = mean(6, 1, 2, 3, 4, 5, 6);
    printf("mean calculated:%f\n", mean_calculated);
    double median_calculated = median(5, 1, 2, 3, 4, 5);
    printf("median calculated:%f\n", median_calculated);
    median_calculated = median(6, 1, 2, 3, 4, 5, 6);
    printf("median calculated:%f\n", median_calculated);
    return 0;
}

double mean(int count, ...) {
    // va_list type to make ap variable of type va_list
    va_list ap;
    double sum;

    // initializing ap to access arguments after count
    va_start(ap, count);

    for (int i = 0; i < count; i++) {
        // va_arg to retrieve each argument as int
        sum += va_arg(ap, int);
    }

    // va_end to clean up argument list
    va_end(ap);

    return sum / count;
}

double median(int count, ...) {
    va_list ap;
    double median = 0;
    int is_odd = 1;
    if (count % 2 == 0) {
        is_odd = 0;
    }

    va_start(ap, count);
    for (int i = 0; i <= count / 2; i++) {
        if (is_odd && i == count / 2) {
            median = va_arg(ap, int);
        } else if (!is_odd && (i == count / 2 - 1 || i == count / 2)) {
            median += va_arg(ap, int);
        } else {
            va_arg(ap, int);
        }
    }

    va_end(ap);
    return is_odd ? median : median / 2;
}
