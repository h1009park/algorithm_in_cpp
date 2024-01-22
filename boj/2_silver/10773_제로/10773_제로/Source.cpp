#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 100000
#include <stdio.h>

int k, input;

class Stack {
private:
	int arr[MAX_SIZE];
	int size = 0;
public:
	void push(int mValue) {
		arr[size++] = mValue;
	}

	int pop() {
		return arr[size--];
	}

	int sum() {
		int ret = 0;
		for (int i = 0; i < size; i++) {
			ret += arr[i];
		}
		return ret;
	}
};

Stack stack;

int main() {
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &input);
		if (input == 0) {
			stack.pop();
		}
		else {
			stack.push(input);
		}
	}

	printf("%d", stack.sum());	

	return 0;
}