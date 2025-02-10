//Program to find if there is a pair with sum x in a sorted array 
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

    printf("Enter Sum X: ");
    scanf("%d",&trgtSum);

    int sum;
    for(i=0;i<n;i++){
        sum=0;
        for(j=i;j<i+1;j++){
            sum=arr[j]+arr[j+1];   
            if(trgtSum==sum){
                printf("(%d,%d)",arr[j],arr[j+1]);
        }         
        break;
        }

    }
    if (sum==0)
    printf("No such Pair!");
}
