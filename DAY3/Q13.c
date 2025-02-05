#include <stdio.h>

int main(){
    int arr[100], n, beg, end, mid, a;
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);
    
    printf("Enter numbers in sorted order:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number you want to search: ");
    scanf("%d", &a);
    
    beg = 0;
    end = n - 1;
    
    while (beg <= end) {
        mid = (beg + end) / 2;
        
        if (arr[mid] == a) {
            printf("Element found at position %d\n", mid + 1);
            return 0;
        } else if (arr[mid] > a) {
            end = mid - 1;
        } else {
            beg = mid + 1;
        }
    }
    
    printf("Element not found\n");
    return 0;
}
