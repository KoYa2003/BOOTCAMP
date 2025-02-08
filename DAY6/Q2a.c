//sir method
#include<stdio.h>
int main(){
    int arr1[100];
    int arr2[100];
    int n,m,i,j;
    printf("Enter size of array1: ");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter size of array2: ");
    scanf("%d",&m);
    printf("Enter elements:");
    for(i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    int k=n+m;
    int merge[k];
    for(i=0;i<n;i++){
        merge[i]=arr1[i];
    }

    for(j=0;j<m;j++){
        merge[i+j]=arr2[j];
    }
    printf("Merge Array: ");
    for(i=0;i<k;i++){
        printf("%d ",merge[i]);
    }

    printf("Union of Array: ");
    while(i<n && j<m){
        if(arr[i]<arr[j]){
            printf("%d",arr[i]);
        }
        else if(arr[i]>arr2[j]){
            printf("%d",arr[j]);
        }
    }

    for(i=0;i<k;i++){
        printf("%d ",merge[i]);
    }

}