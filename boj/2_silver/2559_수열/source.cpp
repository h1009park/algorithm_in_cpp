#define _CRT_SECURE_NO_WARNINGS
#define MAX 1<<17
#include <stdio.h>

char rbuf[MAX];
char wbuf[MAX];
int idx, nidx, widx;

int arr[100000];
int n, k, sum, max;

inline char read() {
	if (idx == nidx) {
		nidx = fread(rbuf, 1, MAX, stdin);
		if (!nidx) return 0;
		idx = 0;
	}
	return rbuf[idx++];
}

inline int readInt() {
	int sum = 0;
	char now = read();
	bool flg = false;

	while (now <= 32) now = read();
	if (now == 45) flg = true, now = read();
	while (now >= 48) sum = sum * 10 + now - '0', now = read();

	return flg ? -sum : sum;
}

int main() {
	n = readInt(), k = readInt();

	for (int i = 0; i < n; i++) {
		arr[i] = readInt();
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