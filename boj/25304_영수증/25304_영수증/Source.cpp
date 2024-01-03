#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum;
int n;
int a, b;
int main() {
	scanf("%d", &sum);
	scanf("%d", &n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		ans += a * b;
	}

	if (sum == ans) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
}