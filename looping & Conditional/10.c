//10. Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5);
#include<stdio.h>
int main(){
    int num,first=0,last=0,sum;
    

    printf("Enter number: ");
    scanf("%d",&num);

    last=num%10;
    while (num>10)
    {
        num=num/10;
    }
   first=num;
    sum=first+last;
    printf("\nsummation of first digit %d and last digit %d = %d",first,last,sum);
}