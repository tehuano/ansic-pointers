#include <stdio.h>

int main(void) {
    int num = 10;
    int *ptr = NULL;
    ptr = &num;
    printf("num: %d\n", num);
    printf("num via ptr: %d\n", *ptr);
    printf("Updating value of num via ptr...\n");
    *ptr = 20;
    printf("num: %d\n", num);
    printf("num via ptr: %d\n", *ptr);
    return 0;
}