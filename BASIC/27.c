// Convert days into months

#include<stdio.h>
int main(){
    int days;
    int month;

    printf("Enter days for convert in month: ");
    scanf("%d",&days);

    month=30;//days
    month=days/month;

    printf("\nDays in Month: %d",month);
}
