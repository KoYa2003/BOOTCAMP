//program to find the sum of any subarray using the prefix sum array

#include <stdio.h>

int main() {
    int n, i, L, R;
    int arr[100], prefix[100];

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    prefix[0] = arr[0];
    for (i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    printf("Enter subarray range (L R): ");
    scanf("%d %d", &L, &R);

    // Calculate sum using prefix sum
    int sum;
    if (L == 0) {
        sum = prefix[R];
    } else {
        sum = prefix[R] - prefix[L - 1];
    }

    printf("Sum of subarray from index %d to %d: %d\n", L, R, sum);

    return 0;
}
