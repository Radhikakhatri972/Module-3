//find circumference of Rectangle formula: rectangle=(lenght+width)*2 ;
#include<stdio.h>
int main(){
    
    int length,width;

    printf("Enter length: ");
    scanf("%d",&length);

    printf("Enter width: ");
    scanf("%d",&width);

    int R=(length+width)*2;

    printf("\ncircumference of Rectangle : %d",R);

}