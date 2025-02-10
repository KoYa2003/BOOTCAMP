//Program to rearrange positive and negative integers alternatively in an array
#include<stdio.h>
int main(){
    int arr[100];
    int pos[100],neg[100],res[100];
    int n,i;
    printf("Enter Size: ");
    scanf("%d",&n);

    printf("Enter Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int cntp=0,cntn=0;
    for(i=0;i<n;i++){
        if(arr[i]>0){
            pos[cntp]=arr[i];
            cntp++;
        }
        else{
            neg[cntn]=arr[i];
            cntn++;
        }
    }

    for(i=0;i<n;i++){
            res[2*i]=pos[i];
            res[2*i+1]=neg[i];
        
    }

    // int pos=0,neg=1;
    // for(int i = 0; i < n;i++){
    // if(arr[i] > 0){
    //     res[pos] = arr[i];
    //     pos += 2;
    // }else{
    //     res[neg] = arr[i];
    //     neg += 2;
    // }

    printf("Reuslt:\n");
    for(i=0;i<n;i++){
        printf("%d ",res[i]);
    }
}

