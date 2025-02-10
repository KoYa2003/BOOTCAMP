//program to print a matrix in a snake pattern

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

    printf("Snake:");

    for(i=0;i<n;i++){
        if(i%2==0){
            for(j=0;j<n;j++){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(j=n-1;j>=0;j--)
            {
                printf("%d ",arr[i][j]);
            }
        }
            
    }

    printf("\n");
}
