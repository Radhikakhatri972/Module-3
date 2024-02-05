//13. WAP to accept 5 numbers from user and check entered number is even or odd using of array
#include<stdio.h>
int main(){
    int num[20];
    int i=0;

    printf("Check entered number is even or odd.\n");
    printf("Enter 5 numbers:\n");
    for(i=1;i<=5;i++){
        scanf("%d",&num[i]);
    }

    printf("\n");
    for(i=1;i<=5;i++){
        if(num[i]%2==0){
             printf("\nnumber %d is even",num[i]);
    }
    else{
             printf("\nnumber %d is odd",num[i]);
    }
        }
       
    }
