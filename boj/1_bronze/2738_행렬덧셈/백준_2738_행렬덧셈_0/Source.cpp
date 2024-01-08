#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, m, b;
int a[100][100];

int main() {
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &b);
			printf("%d ", a[i][j] + b);
		}
		printf("\n");
	}
}