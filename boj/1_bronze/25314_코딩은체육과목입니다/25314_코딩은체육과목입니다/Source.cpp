#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int input;

int main() {
	scanf("%d", &input);
	input /= 4;
	for (int i = 0; i < input; i++) {
		printf("long ");
	}
	printf("int");

	return 0;
}