//Program to find the triplet in a sorted array 
#include<stdio.h>
int main(){
    int arr[100];
    int n,i,j,trgtSum;
    printf("Enter Size: ");
    scanf("%d",&n);

    printf("Enter Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        int cnt=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt==3){
            printf("%d",arr[i]);
            break;
        }
    }
}
