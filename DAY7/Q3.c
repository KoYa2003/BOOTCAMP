//Program to check if a number is power of two
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n!=0){
        if(n&(n-1)){
            printf("Not Power of two!");
            break;
        }
        else{
            printf("Power of two!");
            break;
        }
    }
}