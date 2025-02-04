// Star Pyramid
//      *    
//     ***   
//    *****  
//   ******* 
//  *********
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter how many rows you want:");
    scanf("%d",&n);
    for(i=1;i<=5;i++){
        for(j=i;j<=n;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    } 
}
