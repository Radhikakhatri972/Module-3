// 5.WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice;
#include<stdio.h>
int ascending(int arr1[50],int arr2[50]){    
int a;
int choiceOfArray;
printf("Enter choice 1 for Array 1 , 2 for Array 2 : ");
scanf(" %d",&choiceOfArray);
switch(choiceOfArray)
{
    case 1 :

    printf("\n\nArray 1 values are:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",arr1[i]);
    }
    
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr1[i]>arr1[j]){
            
            a=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=a;
        }
        }
    }
    printf("\n\nNumbers in ascending order:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",arr1[i]);
    }
    break;

    case 2 :

    printf("\n\nArray 2 values are:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",arr2[i]);
    }
    
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr2[i]>arr2[j]){
            
            a=arr2[i];
            arr2[i]=arr2[j];
            arr2[j]=a;
        }
        }
    }
    printf("\n\nNumbers in ascending order:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",arr2[i]);
    }
    break;

    default :
    printf("Choice 1 or 2.");
    break;
}
    
}

int decending(int arr1[50],int arr2[50]){
int a;
int choiceOfArray;
printf("Enter choice 1 for Array 1 , 2 for Array 2 : ");
scanf(" %d",&choiceOfArray);
switch(choiceOfArray)
{
    case 1 :

    printf("\n\nArray 1 values are:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",arr1[i]);
    }
    
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr1[i]<arr1[j]){
            
            a=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=a;
        }
        }
    }
    printf("\n\nNumbers in decending order:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",arr1[i]);
    }
    break;

    case 2 :

    printf("\n\nArray 2 values are:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",arr2[i]);
    }
    
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr2[i]<arr2[j]){
            
            a=arr2[i];
            arr2[i]=arr2[j];
            arr2[j]=a;
        }
        }
    }
    printf("\n\nNumbers in decending order:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",arr2[i]);
    }
    break;

    default :
    printf("Choice 1 or 2.");
    break;
}
    
}

int main(){
    int arr1[50],arr2[50],i,j;
    char choiceOfOrder;

    printf("Enter Array 1 values:\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter Array 2 values:\n");
    for(j=0;j<5;j++){
        scanf("%d",&arr2[j]);
    }

    printf("Choice order 'a' for ascending 'd' for decending : ");
    scanf(" %c",&choiceOfOrder);

    switch(choiceOfOrder)
    {
        case 'a' :
        ascending(arr1,arr2);
        break;

        case 'd' :
        decending(arr1,arr2);
        break;

        default :
        printf("Choice order 'a' for ascending 'd' for decending : ");
        break;
    }
}