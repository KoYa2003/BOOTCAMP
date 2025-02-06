//left rotate an array
#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int d;
    printf("Enter value of d: ");
    scanf("%d", &d);

    int temp1[d];
    for (i = 0; i < d; i++) {
        temp1[i] = arr[i];
    }

    for (i = 0; i < d / 2; i++) {
        int temp = temp1[i];
        temp1[i] = temp1[d - 1 - i];
        temp1[d - 1 - i] = temp;
    }

    int temp2[n - d];
    for (i = d; i < n; i++) {
        temp2[i - d] = arr[i];
    }

    for (i = 0; i < (n - d) / 2; i++) {
        int temp = temp2[i];
        temp2[i] = temp2[n - d - 1 - i];
        temp2[n - d - 1 - i] = temp;
    }

    int result[n];
    for (i = 0; i < n - d; i++) {
        result[i] = temp2[i];
    }
    for (i = 0; i < d; i++) {
        result[n - d + i] = temp1[i];
    }

    printf("Array after left rotation by %d positions:\n", d);
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
