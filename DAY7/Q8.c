//program to find the XOR of numbers from L to R
#include<stdio.h>

int main(){
    int i,L,R;

    printf("Enter L and R: ");
    scanf("%d %d", &L, &R);

    int res=0;
    for(i=L;i<=R;i++){
        res = res ^ i;
    }
    printf("Result: %d",res);
}