//1.Write a C program to accept two integers and check whether they are equal or not;
#include<stdio.h>
int main(){

    int num1,num2;

    printf("Enters 2 numbers for comparison:");
    printf("\nEnter Number 1. ");
    scanf("%d",&num1);

    printf("Enter Number 2. ");
    scanf("%d",&num2);

    if(num1==num2){
        printf("\nAbove numbers are equal.");
    }
    else{
        printf("\nAbove numbers are not equal.");
    }

}