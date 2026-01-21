#include <stdio.h>

int main(void) {
    int baseLen = 11;
    int num = 1;
    while (num <= baseLen) {
        if (num % 2 != 0) {
            int totalGaps = baseLen - num;
            for (int i = 0; i < totalGaps / 2; i++) {
                printf(" ");
            }
            for (int i = 0; i < num; i++) {
                printf("%s", "*");
            }
            for (int i = 0; i < totalGaps / 2; i++) {
                printf(" ");
            }
            printf("\n");
        }
        num++;
    }
}