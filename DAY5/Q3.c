//Program to find the maximum subarray sum   

#include<stdio.h>
int main(){
    int n,i,j,max_sum=0,sum;
    int arr[100];
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++){
        sum+=arr[i];
        if(sum>max_sum){
            max_sum=sum;
        }
        if(sum<0){
            max_sum=0;
            
        }
    }
printf("Max Sum of subarray %d",max_sum);
}