//Program to find he union and intersection of two sorted array

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

    //print merge array
    printf("Merge Array: ");
    for(i=0;i<k;i++){
        printf("%d ",merge[i]);
    }
    printf("\n");

    printf("Union of Array: ");

    // Removing duplicates
    for(i=0;i<k;i++) {
        for(j=i+1;j<k;j++) {
            if(merge[i]==merge[j]) {
                for(int l=j;l<k-1;l++) {
                    merge[l]=merge[l+1];
                }
                k--; 
                } 
        }
    }
    for(i=0;i<k;i++){
        printf("%d ",merge[i]);
    }
    printf("\n");

    //Intersection
    int z=0;
    int interA[10];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                interA[z]=arr1[i];
                z++;
                break;
            }
        }
    }
    printf("Intersection of Array: ");
    for(i=0;i<z;i++){
        printf("%d ",interA[i]);
    }

}