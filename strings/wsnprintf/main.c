#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int num = 23452345;
    int size = snprintf(NULL, 0, "%d", num);
    char *str4num = malloc(size + 1);
    sprintf(str4num, "%d", num);

    float flt = 244.532;
    int size4flt = snprintf(NULL, 0, "6.3f", flt);
    char *str4flt = malloc(size4flt + 1);
    sprintf(str4flt, "%6.3f", flt);
    printf("%s\n", str4num);
    printf("%s\n", str4flt);
}
