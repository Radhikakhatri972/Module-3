// 4. WAP to make simple calculator
// (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement

#include <stdio.h>
int main()
{

    int num1, num2;
    char choice;

    printf("\nChoose calculation method: \n");

    printf("\n(+) for Addition\n");
    printf("(-) for Subtraction\n");
    printf("(*) for Multiplication\n");
    printf("(/) for Division\n");
    printf("(%%) for Modulo\n");
 
    printf("\nEnter choice: ");
    scanf("%c",&choice);

    printf("\nEnter a number 1: ");
    scanf("%d", &num1);

    printf("Enter a number 2: ");
    scanf("%d", &num2);

   

    switch(choice)
    {

        case'+':
             printf("\n%d + %d = %d",num1,num2,num1+num2);
        break;

        case'-':
            printf("\n%d - %d = %d",num1,num2,num1-num2);
        break;

        case'*':
             printf("\nM%d * %d = %d",num1,num2,num1*num2);
        break;

        case'/':
             printf("\n%d / %d = %d",num1,num2,num1/num2);
        break;

        case'%':
             printf("\n%d %% %d = %d",num1,num2,num1%num2);
        break;
    }

}