//Program to find the peak element in an array
#include<stdio.h>
int main(){
    int arr[100];
    int n,i;
    printf("Enter Size: ");
    scanf("%d",&n);

    printf("Enter Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=1;i<n-1;i++){
        if(arr[i-1]<arr[i]&&arr[i]>arr[i+1]){
            printf("Peak element: %d",arr[i]);
            printf("\nPeak element index: %d",i);
        }
    }
}