// C Program to right rotate the array by d positions
// by rotating one element at a time

#include <stdio.h>
void rotateArr(int arr[], int n, int d) {
    for (int i = 0; i < d; i++) {
      
        int first = arr[n-1];                                                                                       
        for (int j = n-1; j >0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = first;
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int d = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    rotateArr(arr, n, d);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}