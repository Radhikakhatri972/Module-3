//11. Accept 5 names from user at run time.
#include<stdio.h>
int main(){
    char name[5][10];
    int i;

    printf("Enter 5 names:\n");

        for( i=0;i<5;i++){
        scanf("%s",&name[i]);
        }       

    printf("\nStudents names are below:-\n");

    for(i=0;i<5;i++){

        printf("\n");
        printf("Name %d : %s",i+1,name[i]);
        }
} 