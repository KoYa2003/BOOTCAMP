//program to find all elements that appear more than n/k times in an array
#include<stdio.h>

int main(){
    int i, n, k,threshold;  
    int arr[100],count[100]={0};

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter k: ");
    scanf("%d",&k);

    threshold=n/k;

    for(i=0;i<n;i++){
        count[arr[i]]++;
    }

    printf("Elements appearing more than %d/%d times:\n", n, k);
    for (i = 0; i < 100; i++) {
        if (count[i] > threshold) {
            printf("%d ", i);
        }
    }
}

