//.Convert years into days and months;
#include<stdio.h>
int main(){

    int months,days;
    float years;

    printf("Enter years: ");
    scanf("%f", &years);

        days=365*years;
        months=12*years;

    printf("\nDays : %d",days);
    printf("\nMonths : %d", months);
}