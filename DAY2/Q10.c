//program to check if a number is prime 

#include<stdio.h>
int main(){
    int n,f=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){//for rem %
            f=1;
            break;
        }
    }    
    if (f==1){
        printf("Number is not prime!");
    }
    else{
        printf("Number is prime!");
    }


}
