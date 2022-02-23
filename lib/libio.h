
//CONSOLE INPUT OUTPUT
//CALL ASSEMBLER FUNCTIONS
extern void _print(char* buffer, int size) __asm__("print");
extern void _scan(char* buffer, int size) __asm__("scan");

//CONSOLE PRINTING
void printString(char* buffer);
void printInt(int number);

//CONSOLE SCANNING
//void scanInt(int* number); //INCOMPLETE
//void scanc(char* charcter);
void scanString(char* buffer);

//TYPE CASTING
void itos(char* string, int number);
int stoi(char* string);

//STRINGS
int string_len(char* string);
