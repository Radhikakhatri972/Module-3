//WAP to convert years into days and days into years;

#include<stdio.h>
int main(){

    int years,days;

    printf("Enter years: ");
    scanf("%d", &years);

        days=365*years;
        printf("Days: %d\n",days);
    
    printf("\nEnter days: ");
    scanf("%d", &days);
   
        years=days/365;
        printf("years: %d",years);

}