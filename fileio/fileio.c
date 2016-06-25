#include <stdio.h>
#include <stdlib.h>



/*** NOT FINISHED ***/

/* C File I/O and Binary File I/O */

int main() {

	FILE *fp;

	/* fopen */
	//FILE *fopen(const char *filename, const char *mode);
	
	/* ex using fopen*/
	//fp = fopen("c:\\test.txt", r);

	/* fclose */
	//int fclose(FILE *file);

	/* ex using fclose */
	//fclose(fp);
	return 0;
}

/* notes
 *
 * ln8: Using a FILE pointer. This lets the prog. keep
 * track of the accessed file. (You can think of it as
 * the mem.addr. of file or loc. of file).
 *
 * ln11: fopen opens a file, and rets. a FILE pointer.
 * Once file is open, you can use the FILE pointer to
 * let compiler perform input and output functions on
 * the file.
 * 		-> if you use a str.literal in the arg., use //
 *		-> will ret. 0, or NP if file DNE or write-prot.
 * 
 * fopen modes:
 * r - open for reading
 * w - open for writing (file need not exist)
 * a - open for appending (file need not exist)
 * r+ - open for reading and writing, start at beginning
 * w+ - open for reading and writing (overwrite file)
 * a+ - open for reading and writing (append if file exists)
 * 		-> attach b to modes to open a file in binary mode
 *
 * ln17: when fin. working with a file, close it with fclose.
 * fclose rets 0 if closed succ.
 *
 *
 * 
 *
 *
 */

