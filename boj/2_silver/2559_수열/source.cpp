#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[100000];
int n, k, s, e, sum, max;
int main() {
	scanf("%d %d", &n, &k);
	s = 0, e = k - 1;

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (i < k) {
			sum += arr[i];
		}
	}

	max = sum;
	for (int i = 1; i < n - k + 1; i++) {
		sum = sum - arr[s++] + arr[++e];
		max = max < sum ? sum : max;
	}

	printf("%d", max);
	return 0;
}