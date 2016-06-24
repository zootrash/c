#include <stdio.h>
#include <stdlib.h>

int main() {
	// 1d array/str
	char str[10];
	int i = 0;

	scanf("%s", str);
	for(i=0; i<10; i++) {
		if(str[i] == 'a') {
			printf("You entered an a!\n");
		}
	}

	// 2d arrays
	int x;
	int y;
	int twodarr[8][8];

	for(x=0; x<8; x++) {
		for(y=0; y<8; y++) {
			twodarr[x][y] = x*y;
		}
	}
	
	printf("Array indices: \n");
	for(x=0; x<8; x++) {
		for(y=0; y<8; y++) {
			printf("[%d][%d]=%d", x, y, twodarr[x][y]);
		}
		printf("\n");
	}
	
	return 0;
}

/* notes
 *
 * ln11: no need for &; the compiler automatically
 *			 converts the array into a pointer to the first
 *			 element.
 *
 * - c has no built-in datatypes for strings, instead
 * 	 uses array of chars
 *
 * - an array without brackets acts like a pointer.
 *	 example:
 *		 char *ptr;
 *		 char str[40];
 *		 ptr = str; 	this gives the mem.addr. w/o &
 *
 *		 vs
 *
 *		 int *ptr
 *		 int num;
 *		 ptr = &num;	req. & to give mem.addr. to ptr.
 * 
 * - NOTE: some of values in the for loop may be
 *				 uninitialized, since the user might not input
 *				 a string that fills whole array. We'll look
 *				 at how strings are handled in the next tut.
 */
