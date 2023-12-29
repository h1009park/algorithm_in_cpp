#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int h, m;

int main() {
	scanf("%d", &h);
	scanf("%d", &m);

	if (0 <= m && m < 45) {
		if (h == 0) {
			printf("%d ", 23);
		}
		else {
			printf("%d ", h - 1);
		}		
		printf("%d", m  + 15);
	}
	else {
		printf("%d ", h);
		printf("%d", m - 45);
	}

	return 0;
}