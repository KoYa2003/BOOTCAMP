#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z'){
        printf("Character is in uppercase");
    }
    else if (ch>='a' && ch<='z'){
        printf("Character is in lowercase");
    }
    else{
        printf("Character is in special case");
    }

}