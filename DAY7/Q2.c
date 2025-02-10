//Program to count set bits
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int cnt=0;
    while(n){
        cnt+=(n&1);
        n=n>>1;
    
    }
    printf("Count: %d",cnt);

}