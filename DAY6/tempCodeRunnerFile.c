//program to find common elements in 3 sorted arrays
#include<stdio.h>
int main(){
    int i=0,j=0,k=0,n1,n2,n3;
    int arr1[100],arr2[100],arr3[100];

    //array1
    printf("For Array1-\n");
    printf("Enter Size: ");
    scanf("%d",&n1);

    printf("Enter elements: ");
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("\n");

    //array2
    printf("For Array2-\n");
    printf("Enter Size: ");
    scanf("%d",&n2);

    printf("Enter elements: ");
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    printf("\n");

    //array3
    printf("For Array3-\n");
    printf("Enter Size: ");
    scanf("%d",&n3);

    printf("Enter elements: ");
    for(i=0;i<n3;i++){
        scanf("%d",&arr3[i]);
    }
    printf("\n");

    printf("Common elements: ");
    while (i<n1 && j<n2 && k<n3) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            printf("%d ", arr1[i]);
            i++; j++; k++;
        }

        else if (arr1[i] < arr2[j]) 
            i++;
        else if (arr2[j] < arr3[k]) 
            j++;
        else 
            k++;
    }

}