#include <stdio.h> // This is the header. 
// Imports the standard library that includes `puts`


// function declarations
int add_together(int x, int y) {
	int result = x + y;
	return result;
}

// structure declarations
typedef struct {
	float x;
	float y;
} point;

// conditionals
if (x > 10 && x < 100) {
	puts("x is greater than 10 and less than 100!");
} else {
	puts("x is less than 11 or greater than 99!");
}

// while loops
int = 10;
while (i > 0) {
	puts("Loop iteration");
	i = i - 1;
}

// for loops
// for (initializer, condition, incrementer) {
// 	do thing
// }

// initializer is performed before the loop starts
// condition is checked before each iteration of the loop
// incrementer is performed at the end of each iteration of the loop

for (int i = 0; i < 10; i++) {
	puts("Loop iteration");
}








int main(int argc, char** argv) { // declared to output an int
	puts("Hello, world!");

	int added = add_together(10, 18);
	printf ("%d\n", added);


}



