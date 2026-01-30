#include<stdio.h>

int main(void) {
    struct Rectangle {
        int length;
        int width;
    };

    struct Rectangle rect1;
    rect1.length = 20;
    rect1.width = 10;

    struct Rectangle rect2 = {.length = 30, .width = 20};

    printf("rect1: length: %d, width: %d, rect2: length: %d, width: %d", rect1.length, rect1.width, rect2.length, rect2.width);
    return 0;
}