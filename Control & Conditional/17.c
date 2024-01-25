//17. Write a C program to check whether a triangle can be formed with the given values for the angles.
#include<stdio.h>
int main(){

    int side1,side2,side3;

    printf("Enter the 3 side of the triangle: \n");
    scanf("%d%d%d",&side1,&side2,&side3);

    if(side1+side2+side3==180){
        printf("\nThe triangle is valid.");
    }
    else{
        printf("\nThe triangle is not valid.");
    }
}