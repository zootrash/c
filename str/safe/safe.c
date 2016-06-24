#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Safe Programming*/

int main() {

	/* strcpy has analogous strncopy*/
	char *strncpy(char *dest, const char *src, size_t len);
	return 0;
}


/* notes
 *
 * 1. designers of C incl. funcs to avoid issues like
 *		going beyond the dest in strcat. There are str
 *		funcs that take an additional arg to indicate
 *		the len of the dest buffer.
 *
 * 2. strncpy will only copy len bytes from src to dest.
 *		WARNING: DN guarantee that dest will have a \0
 *						 attached to it. This might happen when
 *						 src is longer than dst.
 *		***			 Now you want to use strlen to make sure
 *						 it will fit.. then why strncpy? Who knows.
 */
