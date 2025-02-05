//count no of digits in a number using recursion
#include<stdio.h>
int countDigit(int n){
    if (n==0){
        return 0;
    }
    else{
        return 1 + countDigit(n/10);
    }
}

int main(){
    int n,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    r=countDigit(n);
    printf("No. of digit in %d is %d",n,r);
}
