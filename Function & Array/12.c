//12. WAP to accept 5 students name and store it in array.
#include<stdio.h>
int main(){
    char name[5][20];
    int i;
    printf("Enter 5 names:\n");
    for(i=0;i<5;i++){
        scanf("%s",&name[i]);
    }
    printf("\n\nlist of students name:\n");

    for(i=0;i<5;i++){
        printf("%s\n",name[i]);
    }

}