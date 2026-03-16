#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int year;
    int month;
    int day;
} date;

int main(void) {
    date *today;
    today = calloc(2, sizeof(date));
    printf("today: %p\n", today);

    today[0].year = 2026;
    today[0].month = 3;
    today[0].day = 16;

    today[1].year = 2026;
    today[1].month = 3;
    today[1].day = 15;

    printf("year:%d, month:%d, day:%d\n", today[0].year, today[0].month, today[0].day);
    printf("year:%d, month:%d, day:%d\n", today[1].year, today[1].month, today[1].day);

    free(today);
}
