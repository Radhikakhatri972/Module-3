// 8. WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
int main(){

    float height;

    printf("Enter your height in cm for check your category: ");
    scanf("%f",&height);

    if(height<=150){

        printf("Your height (%.2f)cm is SHORT.",height);
    }
    else if(height>150 && height<=165){

        printf("Your height (%.2f)cm is AVERAGE.",height);
    }
    else if(height>165 && height<=195){

        printf("Your height (%.2f)cm is TALLER.",height);
    }
    else{

        printf("Your height (%.2f)cm is ABNORMAL.",height);
    }
}