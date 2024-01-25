//14.WAP to find the largest of three numbers;
#include<stdio.h>
int main(){

    int n1,n2,n3;

    printf("Enter 3 numbers for check max value: ");
    scanf("%d\n %d\n %d",&n1,&n2,&n3);

    if(n1>=n2 && n1>=n3){
        printf("\n%d is greater.",n1);

    }

    else if(n2>=n1 && n2>=n3){
        printf("\n%d is greater.",n2);

    }
    else{
        printf("\n%d is greater.",n3);
    }

}