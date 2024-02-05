//4. WAP to find factorial using recursion
#include<stdio.h>
int fact(int f){

    if(f==1) {
        return 1;
    }
        return f*fact(f-1);
}

int main(){

    int f;
    printf("Enter a number: ");
    scanf("%d",&f);
    
    printf("\nFactorial of %d : %d",f,fact(f));
}