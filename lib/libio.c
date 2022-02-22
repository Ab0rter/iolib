#include "libio.h"

void printn(int number) {
	char buffer[100];
	itos(buffer, number);
	int len = string_len(buffer);
	_print(buffer, len);
}

void prints(char* buffer) {
	int len = string_len(buffer);
	_print(buffer, len);
}

int string_len(char* string) {
	int len = 0;
	while(string[len] != '\0') {
		len++;
	}
	return len;
}

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
