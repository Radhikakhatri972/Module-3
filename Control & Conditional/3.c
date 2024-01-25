//3. WAP to check if the given year is a leap year or not.

#include<stdio.h>
int main(){

int year,leap;
    printf("Check the given year is a leap year or not.");
    printf("\nEnter year:");
    scanf("%d",&year); 

    if(year%4==0 && year%100!=0 || year%400==0 )
    {
        printf("%d is a leap year.",year);
    }
    else
    {
        printf("%d is not a leap year.",year);
    }
    
}