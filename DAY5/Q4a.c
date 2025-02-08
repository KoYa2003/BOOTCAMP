//Program to find the max and min sum of subarray of an array

#include<stdio.h>

void main(){
    int n,i,j;
    int arr[100];
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    //Printing Sub Array
    printf("SubArray:");
    int k,sum,max_sum=0,min_sum;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            sum=0;
            for(k=i;k<=j;k++){
                printf("%d",arr[k]);
                sum+=arr[k];
            }
            if(sum>max_sum){
                max_sum=sum;
            }
            if(sum<min_sum){
                min_sum=sum;
            }
            printf("\n");
        }
    }
    printf("Max Sum: %d",max_sum);
    printf("\nMin Sum: %d",min_sum);
}