#include <stdio.h>

int main() {
    enum Months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
    enum Months month = JAN;
    if (month == JAN) {
        printf("The month is: January\n");
    }
    month = MAY;
    if (month > APR && month < SEP) {
        printf("it is summer\n");
    }
}
