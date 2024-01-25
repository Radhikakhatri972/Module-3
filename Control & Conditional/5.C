// /5. Check Number Is Positive or Negative

#include<stdio.h>
int main(){

    int num;

    printf("Enter Numbers to check its Positive or Negative : ");
    scanf("%d",&num);

    if(num<0){

        printf("\nNumber %d is Negative.",num);
    }
    else{

       printf("\nNumber %d is positive.",num);
    }
}