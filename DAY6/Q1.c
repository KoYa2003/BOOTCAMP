//program to sort an array which consists of only 0, 1, and 2 without using sorting

#include<stdio.h>
int main(){
    int arr[100];
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int cnt0=0,cnt1=0,cnt2=0;
    for(i=0;i<n;i++){
        if(arr[i]==0){
            cnt0+=1;
        }        
        if(arr[i]==1){
            cnt1+=1;
        }
        if(arr[i]==2){
            cnt2+=1;
        }
    }
         printf("%d %d %d\n",cnt0,cnt1,cnt2);

    for(i=0;i<cnt0;i++){
        printf("%d",0);
    }
    for(i=0;i<cnt1;i++){
        printf("%d",1);
    }
    for(i=0;i<cnt2;i++){
        printf("%d",2);
    }
}