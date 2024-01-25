//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746;
#include<stdio.h>
int main(){
    int m,n=64728,d;
    
    printf("Reverse number of 64728 is : ");
    for(int i=1;i<=5;i++){
        m=n%10;
        d=n/10;
        n=d;
    printf("%d",m);
    }  
}

