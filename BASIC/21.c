//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable.
#include<stdio.h>
int main(){

    int num1,num2,num3;

    printf("\nEnter Number 1: ");
    scanf("%d",&num1);

    printf("Enter Number 2: ");
    scanf("%d",&num2);

    printf("\nSwapping with using 3rd variable:\n");

    num3=num1;
    num1=num2;
    num2=num3;


    printf("\nAfter swapping Number 1 : %d\n",num1);
    printf("After swapping Number 2 : %d",num2);

     printf("\n\nSwapping without using 3rd variable:\n");
     
    num1=num1+num2;//4+5=9
    num2=num1-num2;//9-5=4
    num1=num1-num2;//9-4=5

    printf("\nAfter swapping Number 1 : %d\n",num1);
    printf("After swapping Number 2 : %d",num2);
}