#include <stdio.h>

/* main
 * - x is a normal integer. 
 * - *p is a pointer to an integer.
		 (it's an int, so it must be a pointer
		  to an integer.)
 * ln16. Assigns address of x to p
 * ln18. store user input in x
 * ln19. prints the value that p is pointing to.
 */
int main() {
	int x;
	int *p;

	p = &x;
	printf("Enter an integer: \n");
	scanf("%d", &x);
	printf("%d\n", *p);

	return 0;
}
