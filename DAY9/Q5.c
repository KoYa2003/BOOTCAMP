//program to perform spiral traversal of a matrix

#include<stdio.h>
int main(){
    int i,j;
    int n,m;
    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter n:");
    scanf("%d",&n);
    int arr[m][n];

    printf("Enter elements: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int top=0,left=0,right=n-1,down=n-1,dir=0;
    
    printf("Result:\n");
    while(top<down && left<right){
        for(i=left;i<=right;i++){
            printf("%d ",arr[top][i]);
        }
        top++;

        for(i=top;i<=down;i++){
            printf("%d ",arr[i][right]);
        }
        right--;

        for(i=right;i>=left;i--){
            printf("%d ",arr[down][i]);
        }
        down--;

        for(i=down;i>=top;i--){
            printf("%d ",arr[i][left]);
        }
        left++;   
    }
}


