#include <stdio.h>
// Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

int main() {
    int n, pos, x;
    int arr[101];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);
    scanf("%d", &x);

    if (pos < 1 || pos > n + 1) {
        return 0;
    }

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;

    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

