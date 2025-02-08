//Program to find the majority element in an array with function

#include<stdio.h>

void majEle(int arr[100],int n){
    int i,j=0;
    int cnt;
    for(i=0;i<n;i++){
        cnt=0;
        for(j=0;j<n;j++){
            if (arr[j]==arr[i]){
                cnt++;
            }
        }
        if(cnt>n/2){
            printf("Majority Element: %d",arr[i]);
            break;
        }
    }
    if(cnt==0)
    printf("No majority element");
}

void main(){
    int n,i,j,cnt;
    int arr[100];
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    majEle(arr,n);
    
}