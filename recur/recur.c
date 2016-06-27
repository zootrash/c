#include <stdio.h>
#include <stdlib.h>

/* Recursion */

void recurse(int count) {
	printf("%d\n", count);
	recurse(count+1);
}

int main() {
	recurse(1);
	return 0;
}
