//14. Accept 5 numbers from user and find those numbers factorials;
#include<stdio.h>
int main(){
int num,i;

    for(i=0;i<=5;i++){

        printf("Enter numbers : ");
        scanf("%d",&num);
        int fact=1;

        for ( int j = 1; j <= num; j++){
            
            fact=fact*j;    
        }
        
        printf("Factorial of %d = %d\n",num,fact);
    }
}      