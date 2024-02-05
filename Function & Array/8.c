//8. WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter string: ");
    scanf("%s",&str);
    int i,len,cmp,flag=0;
    len=strlen(str);

    for(i=0;i<len/2;i++){
        cmp=len-i-1;
        if(str[i]==str[cmp]){
            flag=1;
            // break;
        }
    }
    printf("Reverse string is : \n");
    for(i=len;i>=0;i--){
        printf("%c",str[i]);

    }
    if(flag==1){
            printf("\n%s is a palindrom.",str);
        }
    else{
            printf("\n%s is not a palindrom.",str);
        }
}

