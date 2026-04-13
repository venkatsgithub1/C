#include<stdio.h>
#include<string.h>

int main(void) {
    char s1[] = "Al";
    char s2[] = "Al";
    char s3[] = "Bob";
    char s4[] = "Carl";
    printf("strcmp(s1, s2): %d\n", strcmp(s1, s2));
    printf("strcmp(s1, s3): %d\n", strcmp(s1, s3));
    printf("strcmp(s1, s4): %d\n", strcmp(s1, s4));
    return 0;
}
