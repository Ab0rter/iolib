extern void _print(char* buffer, int size) __asm__("print");

void prints(char* buffer);
void printn(int number);
void itos(char* string, int number);
int string_len(char* string);
