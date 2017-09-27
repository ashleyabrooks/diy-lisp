#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		puts("Hello world!");
	}

	int i = 5;

	while (i > 0) {
		puts("Hello world while loop!");
		i = i - 1;
	}

	hello_world(5);
}

int hello_world(n) {
	for (int i = 0; i < n; i++) {
		puts("Calling hello_world");
	}
}