//26.WAP to show ii. Vowel or Consonant using switch case

#include<stdio.h>
int main(){

    char choice;

    printf("Enter a charactor to show input charactor is Vowel or Consonant. ");
    printf("\nEnter a charactor: ");
    scanf("%c",&choice);

    switch (choice)
    {
    case 'a':
        printf("\nIts a vowel.");
        break;
    case 'e':
        printf("\nIts a vowel.");
        break;
    case 'i':
        printf("\nIts a vowel.");
        break;
    case 'o':
        printf("\nIts a vowel.");
        break;
    case 'u':
        printf("\nIts a vowel.");
        break;

    default:
        printf("\nIts a consonant.");
        break;
    }

}