//program to print boundary elements of a matrix

#include<stdio.h>
int main(){
    int i,j;
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter elements: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Boundary Elements: ");{
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 ||j==0 ||i==(n-1)||j==(n-1)){
                printf("%d ",arr[i][j]);
            }
            else 
                printf("  ");
            }
        }
    }
}
