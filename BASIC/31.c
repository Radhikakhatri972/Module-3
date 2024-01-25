//Convert kilometers into meters;
//1km=1000 meters;

#include<stdio.h>
int main(){

    float km,met;

    printf("Enter kilometers: ");
    scanf("%f",&km);

    met=km*1000;

    printf("\nkm into meters: %.2f",met);

}