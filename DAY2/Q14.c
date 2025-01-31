#include <math.h>
#include <stdio.h>

int main() {
    int n,a=1, b;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1;i*i*i<=n;i++){
        if(n%(i*i*i)==0){
            a=i;
        }
    }

    b=n/(a*a*a);

        printf("For n = %d:\n", n);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0; 
}
