//Find area of Triangle formula: A=1/2*b*h ;
#include<stdio.h>
int main(){

    float a,b,h;
    printf("Enter base: ");
    scanf("%f",&b);

    printf("Enter hight: ");
    scanf("%f",&h);
    
    a=0.5*(b*h);
    printf("\nArea of triangle=%.2f",a);
    return 0;

}

