// program to find the maximum or minimum sum of a subarray of size K
#include <stdio.h>

int main() {
    int n,k,i,sum=0,max_sum;
    int arr[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d",&k);

    for (i = 0; i < k; i++) {
        sum += arr[i];
    }
    max_sum = sum;

    // Sliding window technique
    for (i = k; i < n; i++) {
        sum=sum + arr[i]-arr[i-k]; 
        if (sum>max_sum) {
            max_sum=sum;
        }
    }

    printf("Maximum Sum of subarray of size %d is: %d\n", k, max_sum);
    return 0;
}
