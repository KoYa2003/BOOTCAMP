//fibonacci Nth result with recursion
#include<stdio.h>

int calFibR(int n){
    int fact;
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return(calFibR(n-1)+calFibR(n-2));
    }
}

int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    //calFib(n);
    int Arr[10];
    for(int i=0;i<n;i++){
        printf("%d",calFibR(i));
        Arr[i+1]=calFibR(i);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d",Arr[i+1]);
    }
    printf("\nNth term is %d",Arr[n]);
    return 0;
}