#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

long long int recur(int num) {
	if (num == 0) return 1;
	return num * recur(num - 1);
}

int main() {
	scanf("%d", &n);
	printf("%lld", recur(n));
	return 0;
}