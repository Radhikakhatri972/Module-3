// Accept 5 employees name and salary and count average and total salary;

#include<stdio.h>
int main(){


char name1,name2,name3,name4,name5;
int sal1,sal2,sal3,sal4,sal5;

printf("Enter Employees Name & salary: \n");

    printf("\nName 1 : ");
    scanf("%s",&name1);

        printf("salary : ");
        scanf("%d",&sal1);

    printf("\nName 2: ");
    scanf("%s",&name2);

        printf("salary : ");
        scanf("%d",&sal2);
    
    printf("\nName 3: ");
    scanf("%s",&name3);

        printf("salary : ");
        scanf("%d",&sal3);

    printf("\nName 4: ");
    scanf("%s",&name4);

        printf("salary : ");
        scanf("%d",&sal4);

    printf("\nName 5: ");
    scanf("%s",&name5);

        printf("salary : ");
        scanf("%d",&sal5);

    int total=sal1+sal2+sal3+sal4+sal5;
    int ave=total/5;

    printf("\nTotal salary : %d",total);
    printf("\nAverage salary: %d",ave);

}