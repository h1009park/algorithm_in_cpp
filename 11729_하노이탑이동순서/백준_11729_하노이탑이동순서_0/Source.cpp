#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;
int tower[3][20];
int t[3];
bool found;

void recur(int from) {

	int fromBlock;

	if (found || tower[2][n - 1] != 0) {
		found = true;
		return;
	}

	for (int i = 0; i < 3; i++) {
		if (i == from) {
			fromBlock = t[i]--;

			recur(1);
			recur(2);
		}
	}
}

int main() {

	scanf("%d", &n);
	for (int i = 0; i < 3; i++) {
		t[i] = 0;
	}

	// 원판 채우기
	for (; t[0] < n; t[0]++) {
		tower[0][t[0]] = n - t[0];
	}

	recur(0);

	return 0;
}