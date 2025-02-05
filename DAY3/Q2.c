//fibonacci recursion
#include<stdio.h>
// int calFib(int n){
//     int a=0,b=1;
//     for(int i=2;i<n;i++){
//         int c=a+b;
//         a=b;
//         b=c;
//         printf("%d ",c);
//     }
//     return 0;
// }

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
    for(int i=0;i<n;i++){
        printf("%d",calFibR(i));
    }
    return 0;
}