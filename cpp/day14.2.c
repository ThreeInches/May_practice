#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#if 0
int find_round(char* src, char* find) {
	char tmp[256] = { 0 };
	strcpy(tmp, src);
	strcat(tmp, src);
	return strstr(tmp, find) ? 1 : 0;
}

int main() {
	printf("%d\n", find_round("abcde","eabcd"));
	system("pause");
	return 0;
}
#endif