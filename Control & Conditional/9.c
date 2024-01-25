//9. C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main(){

    char c;

    printf("Enter value to check formate : ");
    scanf("%c",&c);

    if(c>='A' && c<='Z'){

        printf("Entered Charactor '%c' is a Uppercase.",c);
    }
    else if(c>='a' && c<='z'){

        printf("Entered Charactor '%c' is a Lowercase.",c);
    }
    else if(c>='0' && c<='9' ){

        printf("Entered value '%c' is a Digit.",c);
    }
    else{

       printf("Entered Charactor '%c' is a Special Character.",c);
    }
}