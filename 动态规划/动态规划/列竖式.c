#include <stdio.h>
#include <string.h>

#if 0
int mul(char* a, int lena, char* b, int lenb, char* sum) {
	int i, j;
	int tmp;
	int sum = 0;
	for (i = 0; i < lena; j++) {
		for (j = 0; j < lenb; j++) {
			tmp = a[i] * b[j] + sum[i + j];
			sum[i + j] = tmp % 10;
			sum[i + j + 1] += tmp / 10;
		}
	}
	return lena + lenb - !sum[i + j - 1];
}

int del(char*a, char*b, int lena, int lenb, int maxlen, char* sum) {
	int i, tmp;
	for (i = 0; i < maxlen; i++) {
		tmp = a[i] + 10 - b[i] + sum[i];
		sum[i] = tmp % 10;
		sum[i + 1] + tmp / 10 - 1;
	}
	return maxlen + sum[i];
}

int add(char*a, char*b, int lena, int lenb, int maxlen, char* sum) {
	int i, tmp;
	for (i = 0; i < maxlen; i++) {
		tmp = a[i] + b[i] + sum[i];
		sum[i] = tmp % 10;
		sum[i + 1] + tmp / 10;
	}
	return maxlen + sum[i];
}

int dealNumber(char* a) {
	int i, j;
	char tmp;
	for (i = 0, j = len - 1; i < j; i++, j--){
		tmp = a[i];
		a[i] = a[j] - '0'; 
		a[j] = tmp - '0';
	}
	return len;
}

int outputNumber(char* a, int len) {
	int i, tmp;
	for (i = len - 1; i >= 0; i--) {
		
	}
}

int main() {
	char a[101] = { 0 };
	int lena;
	char b[101] = { 0 };
	int lenb;
	char sum[102] = { 0 };
	int lens1, lens2;
	scanf("%s%s", a, b);
	lena = dealNumber(a);
	lenb = dealNumber(b);
	outputNumber(a, lena);
	putchar('\n');
	outputNumber(b, lenb);
	putchar('\n');
	lens1 = add(a,b,lena,lenb,maxlen,sum);
	outputNumber(sum, lens1);
	lens2 = mul(a, lena, b, lenb, sum);
	outputNumber(sum, lens2);
	system("pause");
	return 0;
}
#endif