//Program to find the majority element in an array with function

#include<stdio.h>

// void MaxSubSum(int arr[100],int n){
//     int i,j=0;
//     int sum=0,max_sum=0;
//     for(i=0;i<n;i++){
//         sum+=arr[i];
//         if (sum>max_sum){
//             max_sum=sum;
//         }
//         else{
//             sum=0;
//         }
//     }
//     printf("Maximum sum of subarray is %d",max_sum);    
// }


void main(){
    int n,i,j,cnt;
    int arr[100];
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //MaxSubSum(arr,n);
    
    //Printing Sub Array
    printf("SubArray:");
    int k,sum,max_sum=0;
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
            printf("\n");
        }
    }
    printf("Max Sum: %d",max_sum);
}