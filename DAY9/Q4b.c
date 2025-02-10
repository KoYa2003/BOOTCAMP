//Rotate a matrix by 90 degrees AntiClockwise without swaping
//Anticlockwise: swap col

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

    int trp[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            trp[j][i]=arr[i][j];
        }
    }

    int res[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0){
                res[i+(n-1)][j]=trp[i][j];
            }
            else if(i==n-1){
                res[0][j]=trp[i][j];
            }
            else{
                res[i][j]=trp[i][j];
            }
        }
    }

    printf("Result: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}