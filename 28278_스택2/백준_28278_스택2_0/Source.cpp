#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


class Stack {
private:
	int arr[100000];
	int idx;

public:
	Stack() {
		idx = -1;
	}

	void push(int mMember) {
		arr[++idx] = mMember;
	}

	int pop() {
		if (idx == -1) {
			return -1;
		}
		return arr[idx--];		
	}

	int size() {
		return idx + 1;
	}

	int isEmpty() {
		if (idx == -1) {
			return 1;
		}
		return 0;
	}

	int top() {
		if (idx == -1) {
			return -1;
		}
		return arr[idx];
	}
};

int n, cmd, x;
Stack stack;

int main() {
	FILE *file = fopen("input.txt", "r");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &cmd);
		switch (cmd) {
		case 1:
			scanf("%d", &x);
			stack.push(x);
			break;
		case 2:			
			printf("%d\n", stack.pop());
			break;
		case 3:			
			printf("%d\n", stack.size());
			break;
		case 4:			
			printf("%d\n", stack.isEmpty());
			break;
		case 5:			
			printf("%d\n", stack.top());
			break;
		}
	}
	return 0;
}


