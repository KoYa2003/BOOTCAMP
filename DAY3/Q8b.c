//print power of 2 without <math.h>
#include<stdio.h>

int main(){
    int n,power=1,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        power=power*2;
    }
    printf("Result of 2 power %d is %d",n,power);
}
