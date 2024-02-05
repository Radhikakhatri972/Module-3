//15. Store 5 numbers in array and sort it in ascending order 5 3 1 2 4
#include<stdio.h>
int main(){
    int i,a,j,num[50];

    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(num[i]>num[j]){
            
            a=num[i];
            num[i]=num[j];
            num[j]=a;
        }
        }
    }
    printf("Numbers in ascending order : ");
    for(i=0;i<5;i++){
        printf("%d\t",num[i]);
    }
}