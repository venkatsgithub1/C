#include<stdio.h>
#include<string.h>

int main(void) {
    char s1[] = "John";
    char s2[] = "Doe";
    char s3[256] = "";
    printf("s3 len: %d, s3: %s\n", strlen(s3), s3);
    strcat(s3, s1);
    printf("s3 len: %d, s3: %s\n", strlen(s3), s3);
    strcat(s3, " ");
    printf("s3 len: %d, s3: %s\n", strlen(s3), s3);
    strcat(s3, s2);
    printf("s3 len: %d, s3: %s\n", strlen(s3), s3);
}