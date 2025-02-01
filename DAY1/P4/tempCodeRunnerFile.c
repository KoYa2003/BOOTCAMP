#include<stdio.h>
int main(){
    int i,j;
    int n=5;
    for (i=1;i<=n;i++){
        for(j=i;j<=n-1;j++){
        printf(" ");
        }
        printf("\n"); 
        for(j=1;j<=i;j++){
            printf("*");
        }
          
    }
    printf("\n");
   
}    