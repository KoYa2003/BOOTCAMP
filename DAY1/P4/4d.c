//hollow diamond Star Pattern

#include<stdio.h>
int main(){
    int i,j;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=1;i<n;i++){
        for(j=i;j<=n-1;j++){
            printf("*");
        }
       
        for(j=1;j<=i;j++){
            printf(" ");
        }
         
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=i;j<=n-1;j++){
            printf("*");
        }
        printf("\n");        
    } 

    for (i=n-1;i>0;i--){
        for(j=i;j<=n-1;j++){
            printf("*");
        }
       
        for(j=1;j<=i;j++){
            printf(" ");
        }
         
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=i;j<=n-1;j++){
            printf("*");
    }
  printf("\n");      
    
   } 
}