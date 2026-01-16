#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 2;
    int b = 3;
    printf("a%b = %f\n", (double) a * b);
    printf("a/b = %f\n", (double) a / b);
    // string conversion to numbers
    char intString[] = "12345";
    char floatString[] = "5672.45";
    int intVal = atoi(intString);
    float floatVal = atof(floatString);
    printf("%d\n", intVal);
    printf("%f\n", floatVal);
    double c = 3.14;
    char intString2[64];
    char doubleString2[64];
    sprintf(intString2, "%d", a);
    sprintf(doubleString2, "%f", c);
    printf("%s\n", intString2);
    printf("%s\n", doubleString2);
    return 0;
}
