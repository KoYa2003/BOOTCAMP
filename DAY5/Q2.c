//Program to find the majority element in an array  

#include<stdio.h>
int main(){
    int n,i,j,cnt;
    int arr[100];
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++){
        cnt=0;
        for(j=0;j<n;j++){
            if(arr[j]==arr[i]){
                cnt++;
            }
        }
        if(cnt>n/2){
            printf("Majority element: %d",arr[i]);
            break;
        }
    }
    if(cnt==0)
    {
        printf("No majority element found.\n");
    }
    return 0;
}