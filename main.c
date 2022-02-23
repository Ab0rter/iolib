#include "lib/libio.c"

int main() {
	char string[100];
	
	printString("Write a string\n");
	scanString(string);
	printString(string);

	return 0;
}
