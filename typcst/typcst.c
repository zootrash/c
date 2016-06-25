#include <stdio.h>
#include <stdlib.h>

/* Typecasting */

/* typcst int to char. Notice the %c str.form. for a char.
 * This retruns the ASCII char 'A'.
 */
void int_to_char() {
	printf("%c\n", (char)65);
}

/* ASCII chart */
void print_ascii() {
	for(int x=0; x<128; x++) {
		printf("%d = %c\n", x, (char)x);
	}
}

int main() {
	printf("blank face lp.\n");
	//int_to_char();
	//print_ascii();
	return 0;
}
