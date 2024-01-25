//13. calculate the Factorial of a Given Number using while loop;
#include<stdio.h>
int main(){
    int num,fact=1,i=1;

    printf("Enter Number : ");
    scanf("%d",&num);

    while (i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial of %d : %d",num,fact);

}