#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROW 4
#define LINE 3

#if 0
int main() {
	int a[22][22] = { 0 };
	int x, y;
	scanf("%d%d", &x, &y);
	int i, j;
	a[1][1] = 1;
	for (i = 1; i <= LINE; i++){
		for (j = 1; j <= ROW; j++) {
			if (i == x + 1 && j == y + 1 || i == 1 && j == 1) {
				continue;
			}
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}
	printf("%d\n", a[LINE][ROW]);
	system("pause");
	return 0;
}
#endif