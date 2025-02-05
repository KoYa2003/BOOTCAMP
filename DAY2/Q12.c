//program to check if a number is an Armstrong number 

#include <math.h>
#include <stdio.h>

int main() {
    int n, r, d = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int m=n;

    while (n!=0) {
        d=d+1;
        n=n/10;
    }

    n=m; 

    while (n!=0) {
        r=n%10;
        sum=sum+(int)pow(r, d);
        n=n/10; 
    }

    if (m==sum) {
        printf("Number is Armstrong!");
    } else {
        printf("Number is not Armstrong!");
    }

    return 0; 
}
