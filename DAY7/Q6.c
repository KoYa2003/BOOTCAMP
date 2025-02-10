//Program to find the missing number in an array
#include<stdio.h>
int main(){
    int arr[100];
    int n,i,j=1;
    printf("Enter Size: ");
    scanf("%d",&n);

    printf("Enter Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        j++;
        if (arr[i]!=arr[j]){
            printf("%d",j);
            break;
        }
    }
}