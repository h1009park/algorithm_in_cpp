﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, a, b;

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
	return 0;
}