#include <stdio.h>
int j, k;
int *ptr;
int main (void) {
    int x = 10;
	int *xptr = &x;
	printf("The value of x is %d or %d\n", *(&x), *xptr);
    return 0;
}