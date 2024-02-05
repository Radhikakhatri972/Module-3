/*8b : Write a program of structure for five employee that provides the following information 
-print and display empno, empname, address and age.*/
#include<stdio.h>
struct employee
{
    int emp_no[20];
    char emp_name[5][20];
    char emp_add[5][20];
    int emp_age[20];
    
}s1,s2,s3,s4,s5;

int main(){

    int i=0;

    printf("Enter the  emp_no:\n");
    for(i=1;i<=5;i++){
        scanf("%d",&s1.emp_no[i]);
    }

    printf("Enter the emp_name:\n");
    for(i=1;i<=5;i++){
        scanf("%s",&s1.emp_name[i]);
    }

    printf("Enter the emp_add:\n");
    for(i=1;i<=5;i++){
        scanf("%s",&s1.emp_add[i]);
    }

    printf("Enter the  emp_age:\n");
    for(i=1;i<=5;i++){
        scanf("%d",&s1.emp_age[i]);
    }   

    printf("\nEmplyees details are : \n");
 
        printf("\n\nEmp no. %d Details :\n",s1.emp_no[1]);
        printf("Name. : %s\n",s1.emp_name[1]);
        printf("Add. : %s\n",s1.emp_add[1]);
        printf("Age. : %d\n",s1.emp_age[1]);
        printf("\nEmp no. %d Details :\n",s1.emp_no[2]);
        printf("Name. : %s\n",s1.emp_name[2]);
        printf("Add. : %s\n",s1.emp_add[2]);
        printf("Age. : %d\n",s1.emp_age[2]);
        printf("\nEmp no. %d Details :\n",s1.emp_no[3]);
        printf("Name. : %s\n",s1.emp_name[3]);
        printf("Add. : %s\n",s1.emp_add[3]);
        printf("Age. : %d\n",s1.emp_age[3]);
        printf("\nEmp no. %d Details :\n",s1.emp_no[4]);
        printf("Name. : %s\n",s1.emp_name[4]);
        printf("Add. : %s\n",s1.emp_add[4]);
        printf("Age. : %d\n",s1.emp_age[4]);
        printf("\nEmp no. %d Details :\n",s1.emp_no[5]);
        printf("Name. : %s\n",s1.emp_name[5]);
        printf("Add. : %s\n",s1.emp_add[5]);
        printf("Age. : %d\n",s1.emp_age[5]);
    
}