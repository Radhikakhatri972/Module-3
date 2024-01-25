//Convert school’s name in abbreviated form;
#include<stdio.h>
int main(){

    char firstName[10],midName[10],lastName[10];
    printf("Enter a school name: ");
    scanf("%s %s %s",&firstName,&midName,&lastName);
    printf("Abbreviated form: \n");
    printf("%c.%c.%s",firstName[0],midName[0],lastName);

}