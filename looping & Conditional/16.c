//16. Calculate the Sum of Natural Numbers Using the While Loop;
#include<stdio.h>
int main(){
    int num,sum=0,i=0;
    printf("Enter number: ");
    scanf("%d",&num);

    while (i<=num)
    {
        sum +=i;
        i++;
    }
    printf("sum of natural numbers %d = %d",i,sum);
    

}