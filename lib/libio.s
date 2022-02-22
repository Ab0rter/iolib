.global print

/* void print(char* buffer, int size);  */
/* buffer address is passed in r0, size is passed in r1  */

print:
	mov r2, r1 
	mov r1, r0
	mov r0, #0x1
	mov r7, #0x4
	svc #0x0
