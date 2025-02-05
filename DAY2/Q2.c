//Program to find the largest of three numbers 

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);

    //using for loop
    if (a>b){
        if(a>c){
            printf("A is greatest");
        }
        else {
            printf("C is greatest");
        }
    }
    else{ 
        if (b>c){
        printf("B is greatest");
        }
        else {
            printf("C is greatest");
        }
    }

}
