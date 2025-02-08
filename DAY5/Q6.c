//Program to find max length even-odd subarray

#include<stdio.h>

void main(){
    int n,i,j,count;
    int arr[100];
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_length=1;

    int isValid,k;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            isValid=1;
            for(k=i;k<j;k++){
                if ((arr[k] % 2 == 0 && arr[k + 1] % 2 == 0) || 
                (arr[k] % 2 != 0 && arr[k + 1] % 2 != 0)) {
                isValid = 0;  
                break;
                }
            }
            
            if (isValid) {
                int curr_length = j - i + 1;
                if (curr_length > max_length) {
                    max_length = curr_length;
                }
            }
        
    }
    }
    printf("Maximum length of even-odd subarray: %d\n", max_length);
}