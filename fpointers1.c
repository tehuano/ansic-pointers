#include <stdio.h>
#include <stdlib.h>

void func(int);
int main(){
    void (*fp)(int);
    fp = func;
    (*fp)(1);
    fp(2);
    exit(0);
}
void func(int arg){
    printf("%d\n", arg);
}
