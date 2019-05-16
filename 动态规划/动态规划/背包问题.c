#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX(a,b)((a)>(b)?(a):(b))

#if 0
int main() {
	int data[101][1001] = { 0 };
	int size, n;
	int weight[101] = { 0 };
	int value[1001] = { 0 };
	int i, j;
	scanf("%d%d", &size, &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &weight[i], &value[i]);
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= size; j++) {
			if (j < weight[i])  {
				data[i][j] = data[i - 1][j];
			}
			else {
				data[i][j] = MAX(data[i - 1][j], data[i - 1][j - weight[i]] + value[i]);
			}
		}
	}
	printf("%d\n", data[n][size]);
	system("pause");
	return 0;
}
#endif

#if 0
int main() {
	int data[1001] = { 0 };
	int size, n;
	int weight[101] = { 0 };
	int value[1001] = { 0 };
	int i, j;
	scanf("%d%d", &size, &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &weight[i], &value[i]);
	}
	for (i = 1; i < n; i++) {
		for (j = size; j >= weight[i]; j--) {
			data[j] = MAX(data[j], data[j - weight[i]] + value[i]);
		}
	}
	printf("%d\n", data[size]);
	system("pause");
	return 0;
}
#endif