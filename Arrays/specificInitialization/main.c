#include<stdio.h>

int main(void) {
    int grades[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++) {
        printf("index %d has value:%d\n", i, grades[i]);
    }
    printf("------\n");
    int scores[5] = {[0]=67, [4]=89};
    for (int i = 0; i < 5; i++) {
        printf("index %d has value:%d\n", i, scores[i]);
    }
}