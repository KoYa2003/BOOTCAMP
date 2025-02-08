//Program to find subarray with a given sum using the sliding window technique

#include <stdio.h>

int main() {
    int i,n,target;
    int arr[100];

    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    int start=0,sum=0;

    for (i=0;i<n;i++) {
        sum+=arr[i];
        while (sum>target&&start!=i) {
            sum-=arr[start];
            start++;
        }

        if (sum==target) {
            printf("Subarray with sum %d found from index %d to %d\n", target, start, i);
            return 0;
        }
    }

    printf("No subarray with sum %d found.\n", target);
    return 0;
}
