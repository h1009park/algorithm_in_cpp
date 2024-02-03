#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[100000];
int n, k, sum, max;
int main() {
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (i < k) {
			sum += arr[i];
		}
	}

	max = sum;
	for (int i = k; i < n; i++) {
		sum = sum + arr[i] - arr[i - k];
		max = max < sum ? sum : max;
	}

	printf("%d", max);
	return 0;
}