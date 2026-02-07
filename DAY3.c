#include <stdio.h>
// Implement linear search to find key k in an array. Count and display the number of comparisons performed.

int main() {
    int n, k;
    int arr[100];
    int comparisons = 0;
    int found = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("%d\n", comparisons);
    else
        printf("%d\n", comparisons);

    return 0;
}
