//22. Accept 3 numbers from user using while loop and check each numbers palindrome;
#include<stdio.h>
int main(){
    
    int ori_num,n,rem;
    

    
    for(int i=0;i<=2;i++){
        printf("\n\nEnter Number: ");
        scanf("%d",&ori_num);        
        n=ori_num;
        int rev=0;
    do{
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    while(n!=0);
    printf("Reverse number is:%d \n",rev);

    if(rev==ori_num){s
        printf("its a palindrome number.");
    }
    else{
        printf("its not a palindrome number.");
    }

    }
    }
