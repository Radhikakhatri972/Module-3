//Find area of circle=pi*r*r;
#include<stdio.h>
int main(){
    float radius,area,pi=3.14159265359;
    printf("\nEnter the radius of circle: ");
    scanf("%f",&radius);

    area= pi * radius * radius;
    printf("\nArea of the circle : %.2f",area);
    
    return 0;

}
