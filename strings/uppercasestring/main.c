#include <stdio.h>

char *toUpperCase(char *province) {
    int len = 0;
    while (province[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len; i++) {
        if (province[i] >= 'a' && province[i] <= 'z') {
            province[i] = province[i] - 32;
        }
    }
    return province;
}

int main(void) {
    char province[] = "Ontario";
    toUpperCase(province);

    printf("Uppercase: %s\n", province);

    return 0;
}
