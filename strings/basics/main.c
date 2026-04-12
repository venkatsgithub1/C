#include<stdio.h>

int main(void) {
    char strArr[] = "This is a string";
    printf("%s\n", strArr);
    strArr[2] = 'a';
    strArr[3] = 't';
    printf("%s\n", strArr);
    strArr[7] = '\0';
    printf("%s\n", strArr);
    return 0;
}