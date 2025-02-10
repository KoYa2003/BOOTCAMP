//Tranpose
#include<stdio.h>
int main(){
    int i,j;
    int arr[3][3];
    printf("Enter elements: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int trp[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            trp[j][i]=arr[i][j];
        }
    }

    printf("Tranpose: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",trp[i][j]);
        }
        printf("\n");
    }
}