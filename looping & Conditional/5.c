//5. WAP to print factorial of given number;
#include<stdio.h>
int main(){
    int i,num,fact=1;

        printf("Enter Number: ");
        scanf("%d",&num);

        for(i=1;i<=num;i++){
            fact=fact*i;

        }
        printf("Factorial of %d = %d",num,fact);

}