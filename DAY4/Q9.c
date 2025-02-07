//program to find the frequency in a sorted array
#include<stdio.h>

int main() {
    int arr[100], n, i, j=0;
    printf("Enter Size: ");
    scanf("%d", &n);

    printf("Enter elements(Sorted): \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Frequency: \n");
    int cnt;
    for(i=0;i<n;i++){
        cnt=1;
        for(j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                cnt++;
            }
            else{
                break;
            }
        }  
        printf("(%d: %d)\n", arr[i], cnt);
        i=j-1;
    }    

}
