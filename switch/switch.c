#include <stdio.h>

/* Use switches to substitute a
 * long list of if statements
**/

/* prototypes */
void load_newgame(void);
void load_loadgame(void);
void load_multiplayer(void);
void load_options(void);
void load_exit(void);

/* main */
int main() {
	int input;
	
	printf("1. New game\n");
	printf("2. Load game\n");
	printf("3. Multiplayer\n");
	printf("4. Options\n");
	printf("5. Exit\n");
	scanf("%d", &input);
	switch(input) {
		case 1:
			load_newgame();
			break;
		case 2:
			load_loadgame();
			break;
		case 3:
			load_multiplayer();
			break;
		case 4:
			load_options();
			break;
		case 5:
			load_exit();
			break;
		default:
			printf("Bad input. Error: Invalid option.\n");
			break;
	}
	
	return 0;
}

/* functions */
void load_newgame() {
	printf("Starting a new game...\n");
}

void load_loadgame() {
	printf("Loading previous saved games...\n");
}

void load_multiplayer() {
	printf("Loading multiplayer...\n");
}

void load_options() {
	printf("Loading the options menu...\n");
}

void load_exit() {
	printf("Exiting the game...\n");
}
