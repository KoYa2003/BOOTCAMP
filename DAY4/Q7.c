//program to find leaders in an array
#include<stdio.h>

int main() {
    int arr[100], n, i, j=0;
    printf("Enter Size: ");
    scanf("%d", &n);

    printf("Enter elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            printf("%d ",arr[i]);    
        }
    }
}

// //program to find leaders in an array
// #include<stdio.h>

// int main() {
//     int arr[100], n, i, j=0;
//     printf("Enter Size: ");
//     scanf("%d", &n);

//     printf("Enter elements: ");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for(i=0;i<n;i++){
//         int f=0;
//         for(j=i+1;j<n;j++){
//             if(arr[i]<arr[j]){
//                 f=1;
//                 break;
//             }
//         }
//         if(f==0)
//         {
//             printf("%d ",arr[i]);
//         }
//     }


// }