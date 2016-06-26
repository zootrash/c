#include <stdio.h>
#include <stdlib.h>

/* Linked Lists [Singly] */
/* If stms ensures that mem. was properly allocated
 * before traversing the list.
 *
 * While loop cont. as long as there is a ptr. to
 * the next node; conductor goes all the way to the
 * end of the ll.
 *
 * The conductor just moves along, changing what it
 * points to by getting the addr. of conductor->next.
 *
 * At the end of the code, just uses a quick check to
 * ensure we're not OOM, then conductor traverses
 * one more ele. and makes sure its pointer is set to
 * 0 so that the list has an end. 
 *
 *
 *
 */

struct node {
	int x;
	struct node *next;
};

/* printll dn. print last ele. so you have to do so. */
void print_ll(struct node *root) {
	struct node *cond;
	cond = root; 
	if(cond != 0) {
		while(cond->next != 0) {
			printf("%d\n", cond->x);
			cond = cond->next;
		}
		printf("%d\n", cond->x);
	}
}

/* alt dn. req. last print and if stmt like printll. */
void altprint_ll(struct node *root) {
	struct node *cond;
	cond = root;
	while(cond != NULL) {
		printf("%d\n", cond->x);
		cond = cond->next;
	}
}

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

	conductor->next = malloc(sizeof(struct node));

	conductor = conductor->next;

	if(conductor == 0) {
		printf("Out of memory!\n");
		return 0;
	}

	conductor->next = 0;
	conductor->x = 42;

	//print_ll(root;)
	//altprint_ll(root);
	
	return 0;
}
