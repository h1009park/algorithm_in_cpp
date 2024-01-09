#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, ans, sum, ret;
int arr[10];

int main() {
	scanf("%d %d", &n, &ans);
	for (int i = n - 1; 0 <= i; i--) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (ans < arr[i]) {
			continue;
		}

		while ((arr[i] + sum) <= ans) {
			sum += arr[i];
			ret++;
			continue;
		}

		if (sum == ans) {
			break;
		}
	}
	printf("%d", ret);
	return 0;
}