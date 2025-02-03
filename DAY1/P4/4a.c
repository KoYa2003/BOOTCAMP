//Program to print "Hollow Pyramid Star Pattern"
     *      
    * *     
   *   *    
  *     *   
 *       *  
* * * * * * 

#include<stdio.h>
int main(){
    int i,j;
    for (i=1;i<=5;i++){
        for(j=i;j<=5;j++){
        printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1){  
            printf("*");
            }
            else
            printf(" ");
        }

        for(j=2;j<=i;j++)
        {
            if(j==i){  
            printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=6;i++){
        printf("* ");
    }
}    
