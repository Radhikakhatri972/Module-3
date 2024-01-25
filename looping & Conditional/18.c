// 18. Write a C Program to Print the Multiplication Table of N;
#include<stdio.h>
int main(){

    int n,fix,temp;

    printf("Enter a number of table: ");
    scanf("%d",&fix);

    printf("Enter a number where to stop: ");
    scanf("%d",&n);


    for (int i = 1; i <= n; i++)
    {
        temp=fix*i;
        printf("%d * %d = %d\n",fix,i,temp);
    }
    



}