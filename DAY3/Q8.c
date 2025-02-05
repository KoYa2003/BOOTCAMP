//print power of 2 using recursion
#include<stdio.h>
int power(int n){
    if (n==0){
        return 1;
    }
    else{
        return (2*power(n-1));
    }
}
int main(){
    int n,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    r=power(n);
    printf("Result of 2 power %d is %d",n,r);
}
