//Program to find the maximum consecutive 1's in a binary array using function
#include<stdio.h>

void MaxOnes(int arr[100],int n){
    int cnt=0,max_cnt=0;
    int i;
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

int main(){
    int n,i;
    //int cnt,max_cnt=0;
    int arr[100];
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    MaxOnes(arr,n);

}