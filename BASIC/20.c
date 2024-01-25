//Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary;
#include<stdio.h>
int main(){
    float salary,ins_pre,loan_ins;

    printf("Gross salary: ");
    scanf("%f",&salary);

    printf("\nDeduction: \n");

    ins_pre = (salary*10)/100;
        printf("\nInsurance premium(10%%): %.2f\n",ins_pre);

    loan_ins = (salary*10)/100;
        printf("loan Installment(10%%): %.2f\n",loan_ins);
        printf("\nTotal Deduction: %.2f\n",ins_pre+loan_ins);

    float Net_salary = salary - ins_pre - loan_ins;

    printf("\nNet salary= %.2f\n",Net_salary);
}