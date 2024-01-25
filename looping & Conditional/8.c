//8. Write a program to find out the max from given number (E.g., No: 1562 Max number is 6);
// #include<stdio.h>
// int main(){
//     int num,n,temp=0;

//     printf("Enter number: ");
//     scanf("%d",&num);
//     while(num>0){
//         n=num%10;
//                      //  printf("%d",n);
//         if(n>temp){   //1562
//             temp=n;
//             }
            
//         num=num/10;
//     }
//     printf("max digit is %d.",temp);
// }
   
#include<stdio.h>
int main(){
    int num,n,temp=0,count=0;

    printf("Enter number: ");
    scanf("%d",&num);
    while(num>0){
        n=num%10;
                     //  printf("%d",n);
        if(n>temp){   //1562
            temp=n;
            }
            while(n==temp){
                count++;
            }
            
        num=num/10;
    }
    printf("max digit is %d.",temp);
    printf("similar max digit is %d.",count);
}
    
    
