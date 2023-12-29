#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[100];

int main() {
	int n, target;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &target);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == target) {
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}