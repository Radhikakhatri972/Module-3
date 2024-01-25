//12. Program of Armstrong Number in C Using For Loop & While Loop;
//while loop;
#include<stdio.h>
int main(){

    int num,n,sum=0,i;

    printf("Enter Number: ");
    scanf("%d",&num);

    i=num;

    while (num>0)
    {
        n=num%10;
        num=num/10;
        
        sum=sum+(n*n*n);
    }
    if(sum==i){
    printf("\nIts armstrong number.");
    }
    else{
        printf("\nIts not an armstrong number.");
    }
}