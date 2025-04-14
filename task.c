#include <stdio.h>
#include <string.h>

int josep(int n, int k) {
	if (n == 1) return 0;
	else {
		return (josep(n - 1, k) + k - 1) % n + 1;
	}

}

void main() {
	int n, k;
	n = 13;
	k = 3;
	printf("The last person remaining is %d\n", josep(n, k));
}
