//program to find if a triangle is valid based on angles or sides 

#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter sides a,b,c: ");
    scanf("%d %d %d", &a, &b, &c);

    //triangle based on sides
    if (a+b>c && a+c>b && b+c>a) {
        printf("It forms a triangle");
    } 
    else {
        printf("It does not form a triangle");
    }

    // triangle based on angles
    // printf("Enter angles a,b,c: ");
    // scanf("%d %d %d", &a, &b, &c);
    // if ((a+b+c)==180){
    //     printf("angles forms a trinagle");
    // }
    // else{
    //     printf("Angles does not form a triangle");
    // }
    return 0;
}
