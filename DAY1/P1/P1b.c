// Inverted Right Angled Triangle
// *****
// ****
// ***
// **
// *
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        //for(j=0;j<n-i;j++){
        for(j=i;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
