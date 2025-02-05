// //sum of N natural no
// #include<stdio.h>
// void calSum(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum = sum+i;
//     }
//     printf("Sum: %d",sum);   
// }

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     calSum(n);
//     return 0;
// }

//sum of N natural no with rec
#include<stdio.h>
int calSum(int n){
    if(n==0)
        return 0;
    else{
        return(n+sum(n-1));
    } 
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int res=calSum(n);
    printf("Sum: %d",sum);
    return 0;
}

