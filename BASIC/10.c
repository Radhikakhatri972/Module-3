//find the area of a rectangular prism formula: A=2(wl+hl+hw) ;
#include<stdio.h>
int main(){

    int w,h,l;

    printf("Enter width : ");
    scanf("%d",&w);
    printf("Enter hight : ");
    scanf("%d",&h);
    printf("Enter length : ");
    scanf("%d",&l);

    int A=2*((w*h)+(h*l)+(h*w));

    printf("\nArea of a rectangular prism: %d",A);

    
}