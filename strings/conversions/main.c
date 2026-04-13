#include<stdio.h>
#include<stdlib.h>

int main(void) {
    char s1[] = "1.2";
    char s2[] = "12";
    float s1float = atof(s1);
    int s2int = atoi(s2);
    printf("%f\n", s1float);
    printf("%d\n", s2int);
    return 0;
}
