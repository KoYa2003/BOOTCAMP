//Program to find the maximum consecutive 1's in a binary array 

#include<stdio.h>
int main(){
    int n,i,max_cnt=0,cnt;
    int arr[100];
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);

    printf("Enter elements (0 or 1):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            if(cnt>max_cnt){
                max_cnt=cnt;
                
            }
        }
        else{
            cnt=0;
        }
    }
printf("Max Consecutive 1's are %d",max_cnt);
}