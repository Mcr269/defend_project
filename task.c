#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void josephus(int n, int k) {
    bool* alive = (bool*)malloc(n * sizeof(bool));

    int acount = n;
    int curent = 0;
    int index = 0;

    for (int i = 0; i < n; i++) {
        alive[i] = true;
    }

    while (acount > 1) {
        if (alive[curent]) {
            index++;
            if (index == k) {
                printf("Killed %d\n", curent + 1);
                alive[curent] = false;
                acount--;
                index = 0;
            }
        }
        curent = (curent + 1) % n;
    }

    for (int i = 0; i < n; i++) {
        if (alive[i]) {
            printf("Last person %d\n", i + 1);
            break;
        }
    }
	free(alive);
}

int main() {
    int n, k;
    n = 13;
    k = 3;

    josephus(n, k);

    return 0;
}
