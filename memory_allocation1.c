#include <stdio.h>

int my_function();
int global_variable;

int main(void) {
    int tmp, i;
    for (i = 0; i < 10; i++) {
		tmp = my_function();
        printf("static_variable = %d\tglobal_variable = %d\n", tmp, global_variable);
    }
    return 0;
}

int my_function() {
    static int static_variable[10] = {0,1,2,3,4,5,6,7,8,9};
	static_variable[0]++;
    global_variable++;
	return static_variable[0];
}