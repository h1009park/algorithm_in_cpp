#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, m;
int arr[100];

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int sum = 0;
	int ans = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;
			}

			for (int k = 0; k < n; k++) {
				if (i == k || j ==k) {
					continue;
				}

				sum = arr[i] + arr[j] + arr[k];

				if (sum <= m) {
					ans = ans < sum ? sum : ans;
				}
			}
		}
	}

	printf("%d\n", ans);

	return 0;
}