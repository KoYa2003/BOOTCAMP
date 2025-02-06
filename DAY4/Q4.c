//remove all the duplicate elements from an array
#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int arr2[n], size = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < size; j++) {
            if (arr[i] == arr2[j]) {
                break;  
            }
        }
        if (j == size) {
            arr2[size++] = arr[i];  
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
