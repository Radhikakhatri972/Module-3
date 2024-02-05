//11. WAP to accept 5 numbers from user and display in reverse order using for loop and array
#include<stdio.h>
int main(){
    int array[20];
    int i,j=array[4];
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    printf("Entered Numbers are below:\n");

    for(i=0;i<5;i++){
        printf("%d\t",array[i]);
    }
    printf("\n\nReverse numbers are below:\n");

    for(i=4;i>=0;i--){
        printf("%d\t",array[i]);    
    }
}