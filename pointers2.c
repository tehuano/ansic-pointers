#include <stdio.h>
int j, k;
int *ptr;
int main (void) {
    j = 1;
    k = 2;
    ptr = &k;
    printf("\n");
    printf("j is: %d and its location is: %p\n", j, (void *)&j);
    printf("k is: %d and its location is: %p\n", k, (void *)&k);
    printf("ptr is : %p and its location: %p\n", ptr, (void *)&ptr);
    printf("The value of the interger that ptr points to is: %d\n", *ptr);
    return 0;
}