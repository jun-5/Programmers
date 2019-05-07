#include <stdio.h>

int main(void) {
	int n;
	int m;


	scanf("%d %d", &n, &m);
	if (n > 1000) {
		printf("n이너무 큽니다");
		return 0;
	}
	if (m > 1000) {
		printf("m이너무 큽니다");
		return 0;
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}