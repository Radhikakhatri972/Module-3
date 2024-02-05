//10: WAP to perform Palindrome number using for loop and function;
#include<stdio.h>
int palindrome(int num){
    int x,rem,rev=0,i;
    x=num;
    
    for(i=1;x!=0;i++){
        rem=x%10;
        rev=(rev*10)+rem;
        x=x/10;
    }
    if(rev==num){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;

    printf("Enter number to check its palindrom or not :\n");
    scanf("%d",&num);

    if(palindrome(num)==1){
        printf("\n%d is a plaindrome number.",num);
    }
    else{
        printf("\n%d is not a plaindrome number.",num);
    }
}