//program to check if a year is a leap year 

#include<stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        printf("Its a leap year");
    }
    else{
        printf("Its not a leap year");
    }
    

}
