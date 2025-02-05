//program to calculate the GCD and LCM of two numbers 

#include <math.h>
#include <stdio.h>

int main() {
    int a, b, gcd, lcm,x,y,temp;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    x=a;
    y=b;
    //gcd
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;

    //lcm
    lcm=(x*y)/gcd;
    
    printf("GCD (HCF) of %d and %d is: %d\n", x, y, gcd);
    printf("LCM of %d and %d is: %d\n", x, y, lcm);
    return 0; 
}
