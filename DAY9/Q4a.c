//Rotate a matrix by 90 degrees with swaping
//clockwise: swap col


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
    int temp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            trp[j][i]=arr[i][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0){
                temp=trp[i][j];
                trp[i][j]=trp[i][j+(n-1)];
                trp[i][j+(n-1)]=temp;

            }
        }
    }
    

    printf("Result: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",trp[i][j]);
        }
        printf("\n");
    }

    //swap
}