#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  int data;
  struct node *next;
};

int main() {
    struct node *head, *temp;
	int i;
    head = NULL;
    head = malloc(sizeof(struct node));
	
    if(!head) {
	    printf("malloc failed !!\n");
	}
	
    head->data = 0;
    head->next = NULL;
	
    for(i = 1; i <= 5; i++) {
        temp = (struct node *) malloc(sizeof(struct node)); 
        if(temp != NULL) {
            temp->data = i; 
            temp->next = head; 
            head = temp;
        } else {
	        printf("malloc failed !!\n");
			break;
	    }
    }
	temp = head;
    while (temp) {
        printf("%d ", temp->data);
		temp = temp->next;
	}
	while (head) {
		temp = head;
	    head = head->next;
		free(temp);
	}
    return 0;
}