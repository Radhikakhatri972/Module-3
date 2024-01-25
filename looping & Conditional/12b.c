//12. Program of Armstrong Number in C Using For Loop & While Loop;
//for loop;
#include<stdio.h>
int main(){

    int num,i,n,sum=0;

    printf("Enter Number:  ");
    scanf("%d",&num);
    i=num;
    for(num;num>0;num=num/10){
            n=num%10;
            sum=sum+(n*n*n);
    }
   if(sum==i){
    printf("\nIts armstrong number.");
    }
    else{
        printf("\nIts not an armstrong number.");
    }


}