//Program to check if the kth bit is set
#include<stdio.h>
int main(){
    int n,k,i;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Enter value of k:  ");
    scanf("%d",&k);

    if (n & (1<<k)){
        printf("True");
    }
    else{
        printf("False");
    }
}