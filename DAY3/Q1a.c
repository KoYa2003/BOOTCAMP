//factorial of a number using recursion
#include<stdio.h>
int calFact(int n){
    int fact;
    if(n==0){
        return 1;
    }
    else{
        return(n*calFact(n-1));
    }
}
int main(){
    int n,i,res;
    printf("Enter a number: ");
    scanf("%d",&n);

    res=calFact(n);

    printf("Factorial: %d",res);
    return 0;
}