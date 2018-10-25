#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person_t {
    char *name;
    int  age;
};

int main() {
    struct person_t me, *you;
    me.name = malloc(sizeof(char)*10);
    strcpy(me.name,"Tia");
    me.age = 50;
	
    you = malloc(sizeof(struct person_t));
    you->name = malloc(sizeof(char)*10);
    strcpy(you->name, "Elmo");
    you->age = 40;
}