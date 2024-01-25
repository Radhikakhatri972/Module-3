//4. WAP to print table up to given numbers;
#include<stdio.h>
int main(){

    int num;
    printf("Enter number:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        printf("%d * %d = %d\n",num,i,i*num);
    }
}