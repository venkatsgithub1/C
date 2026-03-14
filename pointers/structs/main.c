#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int year;
    int month;
    int day;
} date;

int main(void) {
    date *today;
    today = malloc(sizeof(date));
    printf("today: %p\n", today);
    // first * in date *today says that today accepts address location at which the date
    // struct is defined.
    // this is basically *(today) meaning *(address) becomes value at that address.
    (*today).year = 2026;
    (*today).month = 3;
    (*today).day = 14;

    // shorthand to assign
    date *yesterday;
    yesterday = malloc(sizeof(date));
    printf("yesterday: %p\n", yesterday);
    yesterday->year = today->year;
    yesterday->month = today->month;
    yesterday->day = today->day - 1;

    printf("today: year: %d, month: %d, day: %d\n", today->year, today->month, today->day);
    printf("yesterday: year: %d, month: %d, day: %d\n", yesterday->year, yesterday->month, yesterday->day);
    free(today);
    free(yesterday);
    return 0;
}
