//17. WAP to show difference between Structure and Union.
#include<stdio.h>
struct student
{
    int roll_no;
    char name[10];
}s1;

union employee
{
    int roll_no;
    char name[10];
}u1;

int main(){

printf("Enter student details: \n");
printf("Enter roll no : ");
scanf("%d",&s1.roll_no);
printf("Enter name : ");
scanf("%s",&s1.name);
printf("\nEnter roll no : ");
scanf("%d",&u1.roll_no);
printf("Enter name : ");
scanf("%s",&u1.name);

printf("\nstudent  details are below: \n");
printf("\nDetails of student by structure : \n\n Roll no : %d \n Name : %s\n",s1.roll_no,s1.name);
printf("\nDetails of student by union : \n\n Roll no : %d \n Name : %s",u1.roll_no,u1.name);


}