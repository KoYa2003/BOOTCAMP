//program to solve the chocolate distribution problem

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

    //sorting
    for (i=0;i<n-1;i++) {  
        for (j=0;j<n-i-1;j++) {  
            if (arr[j]>arr[j+1]) {  
            int temp=arr[j];  
            arr[j]=arr[j+1];  
            arr[j+1]=temp;  
            }  
        }  
    }  

    int k;
    printf("Enter no of bache:");
    scanf("%d",&k);

    int minDiff=arr[k]-arr[0];
    int diff;
    for(i=0;i<n;i++){
        diff=0;
        for(j=i+1;j<k;j++){
            diff=arr[k]-arr[i];
            if(diff<minDiff){
                minDiff=diff;
            }
        }
    }
    printf("Min Difference: %d",minDiff);
}  