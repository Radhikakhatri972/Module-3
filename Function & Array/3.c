//3. WAP to find reverse of string using recursion;
#include<stdio.h>
#include<string.h>
void rev(char str[], int i){

    if(str[i]=='\0'){
        return;
    }
    rev(str,i+1);
    printf("%c",str[i]);
    

}
int  main(){
    char str[20];

    printf("Enter string: ");
    scanf("%s",&str);
    printf("\nRevers string is : ");
    rev(str,0);
}
