#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[] = "C programming is fun";
    char *words[256];
    // get the first token using strtok
    char *ptr = strtok(sentence, " ");
    // loop to find other tokens
    int i = 0;
    while (ptr != NULL && i < 256) {
        words[i] = ptr;
        i++;
        ptr = strtok(NULL, " ");
    }
    for (int x = 0; x < 2; x++) {
        char *temp = words[x];
        words[x] = words[4 - x - 1];
        words[4 - x - 1] = temp;
    }

    for (int x = 0; x < 4; x++) {
        printf("%s\n", words[x]);
    }
    return 0;
}
