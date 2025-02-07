//program to find the maximum difference
#include<stdio.h>

int main() {
    int arr[100], n, i, j=0;
    printf("Enter Size: ");
    scanf("%d", &n);

    printf("Enter elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxDiff=arr[1]-arr[0];
    int diff;
    for(i=0;i<n;i++){
        diff=0;
        for(j=i+1;j<n;j++){
            diff=arr[j]-arr[i];
            if(diff>maxDiff){
                maxDiff=arr[j]-arr[i];
            }
        }
    }
    printf("Max Difference: %d",maxDiff);
}
