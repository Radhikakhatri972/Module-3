//12.WAP to find maximum number among 3 numbers using ternary operator;

#include<stdio.h>
int main(){

    int n1,n2,n3,res;

    printf("Enter three numbers for check max value: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    res=(n1>n2 && n1>n3)?printf("Max num is : %d",n1):printf((n2>n3 && n2>n1)?printf("Max num is : %d",n2):printf("Max num is : %d",n3));

}