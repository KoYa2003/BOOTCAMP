//Program to find the equilibrium point
#include<stdio.h> 
int main(){
    int n,i,j;
    int arr[100];
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total_sum=0;
    int left_sum=0;
    for(i=0;i<n;i++){
        total_sum+=arr[i];
    }
    for(i=0;i<n;i++){
        total_sum-=arr[i];
        if(left_sum==total_sum)
        {    printf("%d",i);
        }
        left_sum += arr[i];
    }

}