#include <stdio.h>
#include <stdlib.h>

/* Command Line Arguments */

/* Use command line args as full decl. of main() args.
 *
 */

/* main
 * argc is the argument count; the number of args passed
 * into the prog. from the cmdln, and INLC's. the name of 
 * the prog.
 *
 * the array of character pointers is the listing of all
 * the args. argv[0] is the name of the prog, or an empty
 * str. if the name isnt available.
 */
int main(int argc, char *argv[]) {

	if(argc != 2) {
		printf("usage: %s filename\n", argv[0]);
	} else {
		FILE *file = fopen(argv[1], "r");

		if(file == 0) {
			printf("Could not open file.\n");
		} else {
			int x;
			while( (x = fgetc(file)) != EOF) {
				printf("%c", x);
			}
			fclose(file);
		}
	}
	return 0;
}
