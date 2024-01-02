#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[3];
int dice[6];
int main() {
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			if (arr[i] - 1 == j) {
				dice[j]++;
			}
		}		
	}
	int ans = 0;
	int max = 1;
	for (int i = 0; i < 6; i++) {
		if (dice[i] == 3) {
			ans = 10000 + ((i + 1) * 1000);
			break;
		}
		else if (dice[i] == 2) {
			ans = 1000 + ((i + 1) * 100);
			break;
		}
		else if (dice[i] == 1) {
			max = i + 1;
		}
	}

	if (ans == 0) {
		ans = max * 100;
	}

	printf("%d\n", ans);

	return 0;
}