#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n = 5, sum, t, c, a[95];

int main() {
	while (n--) { 
		scanf("%d", &t), a[t]++, sum += t; 
	}
	for (t = 0; c < 3; t++) { 
		c += a[t]; 
	}
	printf("%d\n%d", sum / 5, --t);
	return 0;
}

//int arr[5];
//
//int main() {
//
//	int sum = 0;
//
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = i; j < 5; j++) {
//			if (arr[i] > arr[j]) {
//				int tmp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//
//	printf("%d\n%d\n", sum / 5, arr[2]);	
//
//	return 0;
//}