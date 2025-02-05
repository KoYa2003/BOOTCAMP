//program to check for a vowel or consonant using switch-case 

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch(ch){
    case 'A':
    case 'E': 
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Character is a vowel");
        break;
    default:
        printf("Character is consonant");
    }

    return 0;
}
