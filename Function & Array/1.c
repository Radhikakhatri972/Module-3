//1. Write a program to find out the max number from given array using function;
#include<stdio.h>
int max(int num[]){

   int i, maxf;
    maxf=num[0];
    for(i=1;i<5;i++)
    {
        if(num[i]>maxf)
            maxf=num[i];
    }
    return maxf;
}

int main()
{
    int i,num[10];

    printf("Enter 5 numbers:\n");
    for(i=1;i<=5;i++){
        scanf("%d",&num[i]);
    }
    
    printf("\nEntered numbers are:\n");
    for(i=1;i<=5;i++){
        printf("%d\t",num[i]);
    }
    max(num);
    printf("\n\nMax num is: %d",max(num));
}
