//WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main(){

    int num1,num2;

    printf("\nEnter Number 1: ");
    scanf("%d",&num1);

    printf("Enter Number 2: ");
    scanf("%d",&num2);

    num1=num1*num2;//4*5=20
    num2=num1/num2;//20/5=4
    num1=num1/num2;//20/4=5

    printf("\nAfter swapping Number 1 : %d\n",num1);
    printf("After swapping Number 2 : %d",num2);
}