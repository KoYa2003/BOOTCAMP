// Number Pyramid
//      1
//     121
//    12321
//   1234321
//  123454321
#include <stdio.h>

int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=i;j<=5;j++){
            printf(" ");
        }
        for(j=1;j<i;j++){
            printf("%d",j);
        }
        for(j=i;j>0;j--){
            printf("%d",j);
        }
        //for(j=2;j<=i;j++){
        //printf("%d",j);
        //}

        printf("\n");
    }

}
