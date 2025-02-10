//Program to find the only odd occurring number
#include<stdio.h>
int main(){
    int n,i,j,cnt;
    int arr[100];
    printf("Enter size:");
    scanf("%d",&n);

    printf("Enter Array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        cnt=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
               cnt++; 
            }
        }
        if(cnt%2!=0){
            printf("%d",arr[i]);
        }
    }
}