//16. Accept 5 numbers from user and perform sum of array.
#include<stdio.h>
int main(){
    int arr[50],i,sum=0;

    printf("Enter 5 numbers:\n");
    for(i=1;i<=5;i++){
        scanf("%d",&arr[i]);
    }

    for(i=1;i<=5;i++){
        sum=sum+arr[i];
    }
    printf("sum of array = %d",sum);
}