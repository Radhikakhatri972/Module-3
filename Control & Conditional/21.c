/*21.Write a C program to input basic salary of an employee and calculate its Gross salary according to following: 
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95%*/
#include<stdio.h>
int main(){

    int bas_sal,gro_sal,hra,da;

    printf("Enter basic salary of an employee: ");
    scanf("%d",&bas_sal);

    if(bas_sal<=10000){
        hra=bas_sal*20/100;
        da=bas_sal*80/100;
        gro_sal=bas_sal+hra+da;
        printf("\nEmployee gross salary is :\nHRA(20%%) = %d\nDA(80%%) = %d\n\nGROSS SALARY = %d",hra,da,gro_sal);
    }
    
    else if(bas_sal>10000 && bas_sal<=20000){
        hra=bas_sal*25/100;
        da=bas_sal*90/100;
        gro_sal=bas_sal+hra+da;
        printf("\nEmployee gross salary is :\nHRA(25%%) = %d\nDA(90%%) = %d\n\nGROSS SALARY = %d",hra,da,gro_sal);
        
    }
    
    else{
        hra=bas_sal*30/100;
        da=bas_sal*95/100;
        gro_sal=bas_sal+hra+da;
        printf("\nEmployee gross salary is :\nHRA(30%%) = %d\nDA(95%%) = %d\n\nGROSS SALARY = %d",hra,da,gro_sal);
        
}
}