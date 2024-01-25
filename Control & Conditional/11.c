//11.WAP to find number is even or odd using ternary operator;

#include<stdio.h>
int main(){

    int num,res;

    printf("Enter a number to check its odd or even:  ");
    scanf("%d",&num);

    res=num%2;

    (res==0)?printf("\nNumberis Even."):printf("\nNumber is Odd.");

}
