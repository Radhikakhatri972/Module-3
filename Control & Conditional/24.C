//24.Accept the input month number and print number of days in that month.;

#include<stdio.h>
int main(){
    int month;
    printf("Enter a month number to show days in month : ");
    scanf("%d",&month);

    switch (month)

    {
    case 1:
        printf("\n31 days in January month.");
        break;
    case 2:
        printf("\n28 days in February month.");
        break;
    case 3:
        printf("\n31 days in March month.");
        break;
    case 4:
        printf("\n30 days in April month.");
        break;
    case 5:
        printf("\n31 days in May month.");
        break;
    case 6:
        printf("\n30 days in June month.");
        break;
    case 7:
        printf("\n31 days in July month.");
        break;
    case 8:
        printf("\n31 days in August month.");
        break;
    case 9:
        printf("\n30 days in September month.");
        break;
    case 10:
        printf("\n31 days in October month.");
        break;
    case 11:
        printf("\n30 days in November month.");
        break;
    case 12:
        printf("\n31 days in December month.");
        break;
    
    default:
    printf("\nThere is no such a month.");
        break;
    }
}
