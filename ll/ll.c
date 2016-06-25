#include <stdio.h>
#include <stdlib.h>

/* Linked Lists [Singly] */

struct node {
	int x;
	struct node *next;
};

/* main */
int main() {

	struct node *root;
	struct node *conductor;
	
	root = malloc(sizeof(struct node));
	root->next = 0;
	root->x = 12;

	conductor = root;
	if(conductor != 0) {
		while(conductor->next != 0) {
			conductor = conductor->next;
		}
	}
	
	return 0;
}
