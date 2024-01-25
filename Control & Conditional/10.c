// 10.WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main(){

    int num;

    printf("Enter Numbers to check its Positive or Negative : ");
    scanf("%d",&num);

    if(num<0){

        printf("\nNumber %d is Negative.",num);
    }
    else if(num==0){

        printf("\nNumber %d is zero.",num);
    }
    else{

       printf("\nNumber %d is positive.",num);
    }
}