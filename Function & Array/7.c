//7. WAP Find out length of string without using inbuilt function
#include<stdio.h>
int main(){

char str[20];
printf("Enter string: ");
gets(str);
int i,l=0;

for(i=0;str[i]!='\0';i++);
printf("string length is : %d",i);

}