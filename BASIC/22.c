// Calculate compound interest (Compound Interest formula:
// a. Formula to calculate compound interest annually is given by:
// Amount= P(1 + R/100)t
// b. Compound Interest = Amount – P

#include<stdio.h>
#include<math.h>
int main(){

    int p,t;
    float r,Amount;

    printf("Enter principal Amount: ");
    scanf("%d",&p);

    printf("\nEnter ROI: ");
    scanf("%f",&r);

    printf("\nEnter time period : ");
    scanf("%d",&t);

    printf("\na.:\n");

    Amount=p*pow((1+r/100),t);//yearly
    printf("\nAnual Compound Interest: %.2f\n",Amount);

    printf("\nb.:\n");

    float Compound_Intrest= Amount - p;

        printf("\nCompound Intrest : %.2f",Compound_Intrest);
}