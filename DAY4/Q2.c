#include <stdio.h>

int main(){
    int arr[100], n;
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int f=0;

    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            f=1;
        }
    }

    if (f){
        printf("Array is not sorted!");
    }
    else{
        printf("Array is sorted!");
    }
    
}
    