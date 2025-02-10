// program to reverse a string
#include <stdio.h>
#include <string.h>


int main() 
{
    char str[10],str2[20];
    printf("Enter string: ");
    gets(str);
    int i, len, flag = 0;
    
    len = strlen(str);
    int l = 0;
    int r = strlen(str) - 1;
    char t;

    while (l < r) {
      
        t = str[l];
        str[l] = str[r];
        str[r] = t;

        l++;
        r--;
    }
    printf("Reverse string: %s", str);
}
