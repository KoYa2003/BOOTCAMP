//Program to find GCD 
#include<stdio.h>
#include<string.h>
int findGCD(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return findGCD(b,a%b);
    }
}

int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a, &b);
    int n=findGCD(a,b);
    
        printf("GCD of %d and %d is %d",a,b,n);
}