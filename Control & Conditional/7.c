//7. Accept marks from user and check pass or fail;
#include<stdio.h>
int main(){

    int marks;
    printf("Enter marks to check pass or fail:");
    scanf("%d",&marks);

    if(marks>=35){
        printf("\nResult : Pass");
    }
    else{
        printf("\nResult : Fail");
    }
}