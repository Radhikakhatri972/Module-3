//17. Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
int main(){
    int num,n=5;
    int ev=0;
    int od=0;
    int i;

    

    while(i<n){
        printf("Enter 5 numbers: \n");
        scanf("%d",&num);

        if(num%2==0){
            ev++;
        }
        else{
            od++;
        }
        i++;
    }

    printf("\nOdd number is : %d",od);
    printf("\nEven number is : %d",ev);

    }
    
