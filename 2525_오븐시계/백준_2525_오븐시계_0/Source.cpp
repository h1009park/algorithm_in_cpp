#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int h, m, c;

int main() {
	scanf("%d %d\n%d", &h, &m, &c);
	int m2 = c % (24 * 60);
	int m3 = m2 % 60;
	int h3 = 0;

	if (m2 / 60 > 0) {
		h3 = m2 / 60;
		h += h3;
	}
		
	m += m3;
	if (m >= 60) {
		m -= 60;
		h++;
	}

	h +


	return 0;
}