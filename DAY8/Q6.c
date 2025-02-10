//program to solve the trapping rain water problem 
#include<stdio.h>
int main(){
    int arr[100];
    int n,i,j,res,MaxA,MaxB,res=0;
    printf("Enter Size: ");
    scanf("%d",&n);

    printf("Enter Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        MaxA=arr[i];
        for(j=0;j<i;j++){
            if (MaxA<arr[j]){
                MaxA=arr[j];
            }
        }

        MaxB=arr[i];
        for(j=i+1;j<n;j++){
            if (MaxB<arr[j]){
                MaxB=arr[j];
            }
        }

        res = res + (min(MaxA, MaxB) - arr[i]); 
    }
    printf("%d",res);


}