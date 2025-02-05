//print power of 2 with <math.h>
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int p=pow(2,n);
    printf("Result of 2 power %d is %d",n,p);
}


