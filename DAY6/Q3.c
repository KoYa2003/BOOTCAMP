//Program to find all pairs in an array whose sum is equal to the given number

#include<stdio.h>
int main(){
    int arr[100];
    int n,i,j,k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int target=0;
    printf("Enter target value:" );
    scanf("%d",&target);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){}
            if(arr[i]+arr[j]==target){
                printf("(%d %d)\n", arr[i],arr[j]);
            }
    }
}
