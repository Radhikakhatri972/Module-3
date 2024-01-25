/*15.Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 ------------------------------------- Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<stdio.h>
int main(){
    int math,phy,chem;
    printf("Eligibility criteria for admission into professional course as below:\n");
    printf("\nMarks in Maths >=65:");
    printf("\nMarks in Phy >=55:");
    printf("\nMarks in Chem>=50");
    printf("\nTotal in all three subject >=190");
    printf("\nTotal in Maths and Physics >=140\n");

    printf("\nEnter marks of math: ");
    scanf("%d",&math);

    printf("\nEnter marks of phy: ");
    scanf("%d",&phy);

    printf("\nEnter marks of chem: ");
    scanf("%d",&chem);

    int sum3=math+phy+chem;
    int sum2=math+phy;

    if(sum3>=190 && sum2>=140)
    {
        printf("\nThe candidate is Eligible.");
    }
    
    else
    {
        printf("\nThe candidate is not Eligible.");
    }


    
}