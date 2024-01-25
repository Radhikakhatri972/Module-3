//Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include<stdio.h>
int main(){

    int student;

    printf("Enter a number of students : ");
    scanf("%d",&student);

    int app=5*student;

    printf("\nRequired apple = %d",app);

}
