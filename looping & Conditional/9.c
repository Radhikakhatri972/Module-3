//9. Write a program make a summation of given number (E.g., 1523 Ans: -11);
#include<stdio.h>
int main(){
    int num,n,sum=0;
    
    printf("Enter number: ");
    scanf("%d",&num);

    for(int i=1;i<=4;i++){
        n=num%10;//2
        num=num/10;//156
        sum=sum+n;
    
    }
    printf("\nsummation of number %d = %d",num,sum);
    
}
