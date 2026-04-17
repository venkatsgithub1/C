#include<stdio.h>

int main(void) {
    char *southIndianStates[] = {"Andhra pradesh", "Karnataka", "Tamilnadu", "Kerala"};
    int len = sizeof(southIndianStates) / sizeof(char*);
    for (int i = 0; i < len; i++) {
        printf("%s\n", southIndianStates[i]);
    }
    char *test = "abcd";
    int len2 = sizeof(test) / sizeof(test[0]);
    printf("%d\n", len2);
    return 0;
}
