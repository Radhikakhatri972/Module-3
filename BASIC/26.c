//Convert temperature Fahrenheit to Celsius;
//c=(_f-32)*5/9;

#include<stdio.h>
int main(){

    float fh,cl;

    printf("Enter Temp in Fahrenheit: ");
    scanf("%f",&fh);

    cl=((fh-32)*5)/9;

    printf("\nTemp in Celsius : %.2f", cl);
}