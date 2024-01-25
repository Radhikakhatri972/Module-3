//18. Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main(){
    int rec,giv;

    printf("Enter received transaction : ");
    scanf("%d",&rec);
    
    printf("Enter given transaction : ");
    scanf("%d",&giv);
    

    if(rec>giv){
        printf("\nloss amount is %d .",rec-giv);
    }
    else{
        printf("\nprofit is %d .",giv-rec);
    }




}