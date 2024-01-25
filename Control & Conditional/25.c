/*Write a C program to input electricity unit charges and calculate total electricity bill 
according to the given condition: 
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill*/

#include<stdio.h>
int main(){

    float unit;

    printf("Enter unit: ");
    scanf("%f",&unit);
    

    if(unit<=50){

        printf("\nConsumed unit(0.50/unit) = %.2f",unit*0.5);
        printf("\nAdditional surcharge(20%%) = %.2f\n",unit*20/100);
        printf("\nYour total electricity bill is : %.2f",unit*(0.50+0.2));
    }
    else if(unit>50 && unit<=150){

        printf("\nConsumed unit(0.75/unit) = %.2f",unit*0.75);
        printf("\nAdditional surcharge(20%%) = %.2f\n",unit*20/100);
        printf("\nYour total electricity bill is : %.2f",unit*(0.75+0.2));
    }
    else if(unit>150 && unit<=250){

        printf("\nConsumed unit(1.2/unit) = %.2f",unit*1.2);
        printf("\nAdditional surcharge(20%%) = %.2f\n",unit*20/100);
        printf("\nYour total electricity bill is : %.2f",unit*(1.2+0.2));
    }
    else{

        printf("\nConsumed unit(1.5/unit) = %.2f",unit*1.5);
        printf("\nAdditional surcharge(20%%) = %.2f\n",unit*20/100);
        printf("\nYour total electricity bill is : %.2f",unit*(1.5+0.2));
    }
}