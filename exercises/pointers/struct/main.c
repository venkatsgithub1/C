#include<stdio.h>
#include<stdlib.h>

typedef struct RestaurantBillInfo {
    double billAmt;
    double tip;
} RestaurantBillInfo;

int main(void) {
    RestaurantBillInfo *r;
    r = malloc(sizeof(RestaurantBillInfo));
    printf("%p\n", r);
    r->billAmt = 10.67;
    r->tip = 1.06;
    printf("billAmt: %f tip:%f\n", r->billAmt, r->tip);
    free(r);
}
