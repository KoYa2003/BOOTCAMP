//program to find the second largest element in an array
#include <stdio.h>

int main(){
    int arr[100], n;
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);
    
    printf("Enter numbers in sorted order:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
        int max1, max2;

    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    for(int i=2;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
            
        }
        else if (arr[i]>max2&&arr[i]!=max1)
        {
            max2=arr[i];
        }
        
    }
    printf("Second largest element %d",max2);
}
    
