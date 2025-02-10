//Program to count number of bits to be flipped to convert A to B
#include<stdio.h>
int main(){
    int n,i,j,a,b;
    printf("Enter 1st numnrt: ");
    scanf("%d",&a);

    printf("Enter 2nd numnrt: ");
    scanf("%d",&b);
 int xorValue = a ^ b;  // XOR to find differing bits
    int count = 0;

    while (xorValue > 0) {
        count += (xorValue & 1);  // Check if last bit is 1
        xorValue >>= 1;  // Right shift to check the next bit
    }

    printf("Minimum bit flips: %d\n", count);}

