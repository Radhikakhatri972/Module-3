//Convert country’s name in abbreviate form;
#include<stdio.h>
int main(){
    char country[10];

    printf("Enter country name: \n");
    scanf("%s",&country);

    printf("Abbreviate form of country:\n");
    printf("%c%c%c",country[0],country[1],country[2]);

}