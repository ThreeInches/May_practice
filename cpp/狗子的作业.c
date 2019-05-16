#include <stdio.h>
#include <math.h>

#if 0
int main() {
	int k = 0, i, n = 10, f, a[5];
	while (k < 5) {
		f = 1;
		n = n + 1;
		for (i = 2; i <= sqrt(n); i++) {
			if (n%i == 0) {
				f = 0;
				break;
			}
			if (f == 1) {
				a[k] = n;
				k++;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d\n", a[i]);
	}
	system("pause");
	return 0;
}
#endif