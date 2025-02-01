#include <stdio.h>

int main(){
    int i,j;
    char ch='A';
    for(i=1;i<=5;i++){
        for(j=i;j<=5;j++){
            printf(" ");
        }
        for(j=1;j<i;j++){
            printf("%c",ch);
        }
        for(j=i;j>0;j--){
            printf("%c",ch);
        }
        //ch++;

        printf("\n");
    }

}