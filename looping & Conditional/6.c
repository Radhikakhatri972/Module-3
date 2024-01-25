//6. WAP to print Fibonacci series up to given numbers;
#include<stdio.h>
int main(){

    int n1=0,n2=1,num; 

    printf("Enter number for fibonacci series: ");
    scanf("%d",&num);
    printf("%d\t%d\t",n1,n2);
    int count=2;
    int temp;
    while (count<num)
    {
        temp=n1+n2; 
        n1=n2;
        n2=temp;
        count++;
        printf("%d\t",n2);

    }
    
}