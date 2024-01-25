//Accept 2 numbers and find out its sum check it size;
#include<stdio.h>
int main(){
    int n1,n2,sum;

    printf("Enter number 1: ");
    scanf("%d",&n1);

    printf("Enter number 2: ");
    scanf("%d",&n2);

    sum=n1+n2;

    printf("\nSize of sum is= %d",sizeof(sum));

}