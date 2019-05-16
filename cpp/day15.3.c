#include <stdio.h>

#if 0
char* strcpy(char* dest, const char* src) {
	char* tmp = dest;
	while ((*dest++ = *src++) != '0');
	return tmp;
}

char* strcat(char* dest, const char* src) {
	char* tmp = dest;
	while (dest++) {
		dest++;
	}
	while (dest++ == *src++);
	return tmp;
}
#endif