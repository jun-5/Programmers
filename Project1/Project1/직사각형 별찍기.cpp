#include <stdio.h>

int main(void) {
	int n;
	int m;


	scanf("%d %d", &n, &m);
	if (n > 1000) {
		printf("n�̳ʹ� Ů�ϴ�");
		return 0;
	}
	if (m > 1000) {
		printf("m�̳ʹ� Ů�ϴ�");
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