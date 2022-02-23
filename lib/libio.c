#include "libio.h"


//CONSOLE OUTPUT

//INT OUTPUT
void printInt(int number) {
	char buffer[100];
	itos(buffer, number);
	int len = string_len(buffer);
	_print(buffer, len);
}

//STRING OUTPUT
void printString(char* buffer) {
	int len = string_len(buffer);
	_print(buffer, len);
}

//CONSOLE INPUT

//INT INPUT
/*
void scanInt(int* number) {
	char buffer[100];
	_scan(buffer, 100);
	prints(buffer);
	//*number = stoi(buffer);
}
*/

//STRING INPUT
void scanString(char* buffer) {
	_scan(buffer, 100); 
}

//STRINGS

//STRING LENGTH
int string_len(char* string) {
	int len = 0;
	while(string[len] != '\0') {
		len++;
	}
	return len;
}


//TYPE CASTING 

//INT TO STRING
void itos(char* string, int number) {
	int tmp, len = 0, i;
	char tmps[100];

	while(number > 0) {
		tmp = number % 10;
		number /= 10;
		tmps[len++] = tmp + '0';
	}

	for(i = 0; i < len; i++) {
		string[i] = tmps[len - i - 1];
	}
	string[len] = '\0';
}

//STRING TO INT
int stoi(char* string) {
	int i = 0, tmp, r = 0;
	while(string[i] != '\0') {
		tmp = string[i] - '0';
		r *= 10;
		r += tmp;
		i++;
	}

	return r;
}
