#define _CRT_SECURE_NO_WARNINGS
#define MAX_N_SIZE 1000000
#include <stdio.h>

int n, m, a, b, cmd;
int arr[MAX_N_SIZE + 1];

int mFind(int mIdx) {
	if (arr[mIdx] == mIdx) {
		return mIdx;
	}
	else {
		int root = mFind(arr[mIdx]);
		arr[mIdx] = root;
		return root;
	}
}

void mUnion(int ma, int mb) {
	int ra = mFind(ma);
	int rb = mFind(mb);

	if (ra == rb) {
		return;
	}
	else if (ra > rb) {
		arr[rb] = ra;
	}
	else if (ra < rb) {
		arr[ra] = rb;
	}

}

int main() {
	scanf("%d %d", &n, &m);

	for (int i = 0; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &cmd, &a, &b);

		if (cmd == 0) {
			mUnion(a, b);
		}
		else if (cmd == 1) {
			int ra = mFind(a);
			int rb = mFind(b);

			if (ra == rb) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
	}

	return 0;
}