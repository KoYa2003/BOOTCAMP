//Character Pyramid
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <stdio.h>

int main(){
    int i,j;
    for(i=1;i<=5;i++){
        char ch='A';
        for(j=i;j<5;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c",ch++);
        }
        ch -= 2; 
        for(j=1;j<i;j++){
            printf("%c",ch--);
        }
        //ch++;

        printf("\n");
    }

}
