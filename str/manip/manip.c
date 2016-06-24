#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Manipulating C strings using string.h */

void strip_newline(char *str, int size) {
	int i;
	
	/* rem. the null.term. */
	for(i=0; i<size; i++) {
		if(str[i] == '\n') {
			str[i] = '\0';
			return;
		}
	}
	/* if we get here, there must not have been a \n */
}

int main() {

	// str compare
	//int strcmp(const char *s1, const char *s2);

	// str concat
	//char *strcat(char *dest, const char *src);

	// str copy
	//char *strcpy(char *dest, const char *src);

	// str len
	//size_t strlen(const char *s);

	char name[50];
	char lastname[50];
	char fullname[100];

	printf("enter your name: \n");
	fgets(name, 50, stdin);

	strip_newline(name, 50);

	// strcmp
	if(strcmp(name, "Alex") == 0) {
		printf("Your name is Alex!\n");
	} else {
		printf("Your name is not Alex.\n");
	}

	// strlen
	printf("Your name is %lx letters long\n", strlen(name));

	printf("enter your last name: \n");
	fgets(lastname, 50, stdin);

	strip_newline(lastname, 50);

	// strcat
	fullname[0] = '\0';
	strcat(fullname, name);		/* copy name into full name*/
	strcat(fullname, " ");
	strcat(fullname, lastname);
	printf("Your full name is %s\n", fullname);
	
	return 0;
}

/* notes
 *
 * strcmp will accept two strings, ret an int. that is
 * 		neg if s1 is less than s2,
 * 		zero if s1 and s2 are equal, and
 * 		pos if s1 is greater than s2.
 * strcmp performs case-sen comp.
 *
 * strcat will cat second str to first. It rets. a ptr
 * to the new string. Beware: strcat assumes that
 * dest is large enough to hold the new str.
 * 
 * strcpy copies entire src into dest.
 *
 * strlen rets len of str, minus \0. Treat size_t as
 * an integer > 0.
 *
 * 1. string.h is a header file that contains funcs
 *		to manip strings.
 *
 * 2. the above funcs all rely on the existance of \0.
 *		check out the safe dir.
 */
