//right arrow star pattern

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf("  ");
        }
        
        //for(j=0;j<n-i;j++){
        for(j=i;j<n;j++){
            printf("*");
        }
        printf("\n");
    }  

    for(i=1;i<n;i++){
        for(j=1;j<n-i;j++){
            printf("  ");
        }
        
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }  
        
        printf("\n");
    
    return 0;
}