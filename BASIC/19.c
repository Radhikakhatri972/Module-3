//Calculate compound interest.
//ci=principle*(1+R/100)T

#include<stdio.h>
#include<math.h>

int main(){

    int p,t;
    float r,ci;

    printf("Enter principal amount: ");
    scanf("%d",&p);

    printf("\nEnter ROI: ");
    scanf("%f",&r);

    printf("\nEnter time period : ");
    scanf("%d",&t);

    ci=p*pow((1+r/100),t);//yearly
    printf("\nCompound interest is: %.2f",ci);
    
    return 0;
}
