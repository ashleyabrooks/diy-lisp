#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
// #include <editline/history.h>

// Declare a buffer for user input of size 2048
static char input[2048];

int main(int argc, char** argv) {

	// Print Version and Exit information
	puts("Lispy Version 0.0.0.0.1");
	puts("Press ctrl+c to exit\n");

	// In a never ending loop:
	while (1) {

		// Output our prompt and get input
		char* input = readline("lispy> ");

		// Add input to history to record it
		add_history(input);

		// Echo input back to user
		printf("No, you're a %s\n", input);

		// Free retrieved input
		free(input);
	}

	return 0;

}