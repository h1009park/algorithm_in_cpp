#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int h, m, c;

int main() {
	scanf("%d %d", &h, &m);
	scanf("%d", &c);

	h += c / 60;
	m += c % 60;
	if (m / 60 > 0) {
		h += m / 60;
		m %= 60;
	}

	h = h % 24;
	if (m / 60 > 0) {
		h += m / 60;
		m = m % 60;
	}

	printf("%d %d", h, m);

	return 0;
}