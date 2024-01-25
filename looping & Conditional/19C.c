// A
// BC
// DEF
// GHIJ
// KLMNO
#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    
    for(row='A';row<='E';row++){
       
        for(col='A';col<=row;col++){
            printf("%c ",ch);
            ch++;

        }
        printf("\n");
    }
}

