//program to generate all prime numbers between 1 and N 

#include<stdio.h>
int main(){
    int n,isPrime;
    printf("Enter a number:");
    scanf("%d",&n);
    
    for(int i=2;i<=n;i++){
        isPrime=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
     if (isPrime) {
            printf("%d ", i);
    }
    }


}
