#include<stdio.h>
#include<string.h>

int main(void) {
    char s1[256];
    char s2[256];

    sprintf(s1, "%s", "sprintf writing into");
    sprintf(s2, "%s", " string");
    strcat(s1, s2);
    printf("%s\n", s1);

    char s3[256];
    sprintf(s3, "%6.3f", 1.22223);
    printf("%s\n", s3);
    return 0;
}