//15. Calculate sum of 10 numbers using of while loop;
#include<stdio.h>
int main(){

    int num,sum=0,i=1;
    
    printf("Enter numbers : ");
    while(i<=10)
    {
        scanf("%d",&num);
        sum=sum+num;
        i++;
    }
    printf("sum of 10 numbers : %d",sum);
}