//reverse an array
#include <stdio.h>

int main(){
    int arr[100], n;
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Reverse Array:\n");
    for(int i = n-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    
}
    