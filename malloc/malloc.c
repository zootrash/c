#include <stdio.h>
#include <stdlib.h>

/* malloc
 * how to request/return memory to the operating system.
 * Malloc is used to init. pointers with mem. from free
 * store (a section of mem. avail. to all programs).
 *
 * the argument to malloc is the amount of memory 
 * requested in bytes. Malloc gets a block of mem. that 
 * size and returns a pointer to the block of mem. 
 * allocated.
 * 
 * need to know the size of the diff. var. types. 
 * This can be done with function sizeof (takes an expr.
 * and rets. its size.) Ex: sizeof(int) rets. the number
 *  of bytes req'd. to store an int.
 * 
 */

int main() {
	//int *ptr = malloc(sizeof(int));
	int *ptr = malloc(sizeof(*ptr));

	free(ptr);
	ptr = NULL;

	return 0;
}

/* notes
 * ln.21: sets ptr to point to a mem.addr. of size int.
 *				The mem. that is pointed to is now unvail. to
 *				other programs. So, the coder needs to free
 *				this memory sometime later.
 * ln.22: this is the clean version of ln21; this is so
 *				you don't need to rewrite whats in sizeof.
 *				Also, it becomes more useful when you
 *				allocate the memory far after you declare it. 
 * ln.24: returns mem. back to the OS. After freeing
 *				a pointer, it's a good idea to reset it to
 *				point to null. When 0 is assigned to a pointer
 * 				the pointer becomes a null pointer. This is
 *				useful to find out a problem immediately
 *				instead of later.
 */
