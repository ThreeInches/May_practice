#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#if 0
void reverse_part(char* src, int i, int j) {
	char tmp;
	while (i < j) {
		tmp = src[i];
		src[i] = src[j];
		src[j] = tmp;
		i++;
		j--;
	}
}


void roud(char* src, int time) {
	int len = strlen(src);
	int pos = len - time % len;
	reverse_part(src, 0, pos - 1);
	reverse_part(src, pos, len - 1);
	reverse_part(src, 0, len - 1);
}

void round_cat(char* src, int time) {
	int len = strlen(src);
	int pos = len - time % len;
	char tmp[256] = { 0 };
	strcpy(tmp, src + pos);
	strncat(tmp, src, pos);
	strcpy(src, tmp);
}


int main() {
	char src[] = "abcde";
	roud(src, 3);
	round_cat(src, 3);
	puts(src);
	system("pause");
	return 0;
}
#endif