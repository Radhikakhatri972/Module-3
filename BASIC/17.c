//Calculate person’s insurance premium based on salary;
//salary - premium%
// 17-20    20%
// <30      15%
// <50      10%
// >50      5%

#include<stdio.h>
int main(){

    int salary;

    printf("Enter the salary: ");
    scanf("%d",&salary);

    if(salary>=18000 && salary<=20000){
        printf("\nYour premium is: %d",salary*20/100);
        

    }

    else if(salary>=20000 && salary<=30000){
        printf("\nYour premium is: %d",salary*15/100);
        
    }

    else if(salary>=30000 && salary<=50000){
        printf("\nYour premium is: %d",salary*10/100);
        
    }

    else if(salary>=50000){
        printf("\nYour premium is: %d",salary*5/100);
        
    }
    else{
        printf("\nYou are not eligible for insurance.");
    }


}