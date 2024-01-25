//.Convert minutes into seconds and hours;
#include<stdio.h>
int main(){

    float min,sec,hr;

    printf("Enter Minutes: ");
    scanf("%f", &min);

        sec=min*60;
        hr=min/60;

    printf("\nsecounds: %.2f",sec);
    printf("\nHours : %.1f", hr);
}