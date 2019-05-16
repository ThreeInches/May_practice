#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0
int main() {
	int cover;
	int sum;
	int n;
	scanf("%d%d", &cover, &n);
	sum = cover;
	while (cover >= n) {
		sum += cover / n;
		cover = cover / n + cover % n;
	}
	printf("%d\n", sum + (cover == n-1));
	system("pause");
}
#endif