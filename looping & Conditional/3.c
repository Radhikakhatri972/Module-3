/* 3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers */

#include<stdio.h>
int main(){
    int num,ev=0,od=0,sumod=0,sumev=0;
    
    for(int i=0;i<10;i++){
        printf("Enter numbers:\n");
        scanf("%d",&num);

        if(num%2==0){
            ev++;
            sumev=sumev+num;
        }
        else{
            od++;
            sumod=sumod+num;
        }
    }
    printf("\nTotal even numbers are %d.",ev);
    printf("\nTotal odd numbers are %d.",od);
    printf("\n\nTotal sum of even numbers are %d.",sumev);
    printf("\nTotal sum of even numbers are %d.",sumod);
  
}