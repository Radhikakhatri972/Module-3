//Write a program to make Simple calculator

#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter value :\n");
    scanf("%d %d",&num1,&num2);

    res=num1+num2;
    printf("\nAddition : %d\n",res);

    res=num1-num2;
    printf("subtraction : %d\n",res);

    res=num1*num2;
    printf("multiplication : %d\n",res);

    res=num1/num2;
    printf("Division : %d\n",res);

    res=num1%num2;
    printf("Modulo : %d\n",res);

    return 0;
}

