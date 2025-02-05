//print numbers N to 1
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int j=n;
    for(int i=1;i<=n;i++){
        printf("%d",j);
        j--;
    }

}