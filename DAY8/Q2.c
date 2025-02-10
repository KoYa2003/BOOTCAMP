//Program to create another array with product of all elements except the ith element
#include<stdio.h>
int main(){
    int arr[100],res[100];
    int i,n,j;
    printf("Enter Size: ");
    scanf("%d",&n);

    printf("Enter Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //int mul=1;
    for(i=0;i<n;i++){
        int mul=1;
        for(j=0;j<n;j++){
            if(i==j){
                continue;
            }
            mul=mul*arr[j];
        }
        res[i]=mul;
    }

    printf("Result:");
    for(i=0;i<n;i++){
        printf("%d ",res[i]);
    }

} 