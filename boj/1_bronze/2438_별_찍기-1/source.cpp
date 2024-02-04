#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}