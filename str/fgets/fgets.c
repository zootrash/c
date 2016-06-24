#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("wat\n");

	char str[256];

	printf("enter a long string: ");

	fgets(str, 256, stdin);

	printf("you entered, %s", str);
	
	/* removing the \n for fgets:
	char input[256];
	int i;

	fgets(input, 256, stdin);

	for(i=0; i<256; i++) {
		if(intput[i] == '\n') {
			input[i] = '\0';
			break;
		}
	}


	*/
	return 0;
}

/* notes
 *
 * C strings are arrays, but there are also string
 * literals, such as "this". They are both
 * collections of chars sitting next to each other
 * in mem. The difference is you cannot mod string
 * literals, but can mod arrays.
 *
 * string literals are surrounded by double marks.
 * ex: "This is a static string"
 *
 * char *my_str; can also be used as a string.
 * This is a ptr to some character (first ele.)
 *
 * arr = malloc(sizeof(*arr)*256); also works.
 * This malloc's the size of the array. Don't
 * forget to free(arr); and set it to null.
 *
 * scanf for input str works, but will terminate
 * after a space. It DN know how big the array is
 * and can lead to buffer overflows. Therefore we
 * use fgets:
 *	 char *fgets(char *str, int size, FILE* file);
 *
 * one thing watch out for when using fgets is that
 * it includes the \n when reading input unless
 * there isn't room to store it. Sometimes you need
 * to manually remove it. See side func above. 
 *
 * IMP: C strings are always terminated with a null
 * character; the \0 character or NULL.
 * ex: char str[50] -> 49 chars with one \0.
 */
