//all zeros at the end
#include <stdio.h>

int main() {
    int arr[100], n, i, j=0;
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j++]=arr[i];
        }
    }
    for(i=j;i<n;i++){
        arr[i]=0;
    }

    printf("Array after moving zeros to the end: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}

