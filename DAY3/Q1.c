//factorial of a number
#include<stdio.h>
 int calFact(int n){
    int fact=1;
     for(int i=1;i<=n;i++){
         fact=fact*i;
     }
     return fact;
 }

int main(){
    int n,i,res;
    printf("Enter a number: ");
    scanf("%d",&n);

    res=calFact(n);

    printf("Factorial: %d",res);
    return 0;
}