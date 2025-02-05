#include <stdio.h>

int BinSearch(int arr[],int start,int end, int key){
    int mid=(start+end)/2;
    if(start>end){
        return 0;
    }
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        return BinSearch(arr,mid+1,end,key);
    }
    else {
        return BinSearch(arr,start,mid-1,key);
    }

}

int main(){
    int arr[100], n, start, end, mid, key;
    printf("Enter how many numbers you want in a list: ");
    scanf("%d", &n);
    
    printf("Enter numbers in sorted order:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number you want to search: ");
    scanf("%d", &key);
    
    start=0;
    end=n-1;
    int res=BinSearch(arr,start,end,key);
    if(res!=0){
        printf("Element not found");
    }
    else{
        printf("Element found\n");
    }

    return 0;
}
