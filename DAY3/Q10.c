//rev of string using recursion
#include <stdio.h>
#include <string.h>

void reverseStr(char str[]) {
    int start = 0, end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    
    printf("Enter the string: ");
    gets(str);
    
    reverseStr(str);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}
