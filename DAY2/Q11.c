//palindrome

#include<stdio.h>
int main(){
    int n,rev=0,r;
    printf("Enter a number:");
    scanf("%d",&n);
    int m=n;

    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
        
    if (m==rev){
        printf("Number is palindrome!");
    }
    else{
        printf("Number is not palindrome!");
    }


}