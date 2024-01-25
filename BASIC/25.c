//25.Accept 5 Expense from user and find average of expense.
#include<stdio.h>
int main(){


char exp1,exp2,exp3,exp4,exp5;
int amt1,amt2,amt3,amt4,amt5;

printf("Enter Employees Name & salary: \n");

    printf("\nExpense Name 1 : ");
    scanf("%s",&exp1);

        printf("Amount : ");
        scanf("%d",&amt1);

    printf("\nExpense Name 2: ");
    scanf("%s",&exp2);

        printf("Amount : ");
        scanf("%d",&amt2);
    
    printf("\nExpense Name 3: ");
    scanf("%s",&exp3);

        printf("Amount : ");
        scanf("%d",&amt3);

    printf("\nExpense Name 4: ");
    scanf("%s",&exp4);

        printf("Amount : ");
        scanf("%d",&amt4);

    printf("\nExpense Name 5: ");
    scanf("%s",&exp5);

        printf("Amount : ");
        scanf("%d",&amt5);

    int ave=(amt1+amt2+amt3+amt4+amt5)/5;
    

    printf("\nAverage Expense: %d",ave);

}

    