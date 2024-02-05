//14. Perform 2D matrix array
#include<stdio.h>
int main(){
    int row,col,arr1[50][50],arr2[50][50],mul[50][50];

    printf("Enter the value of array1: \n");
    for(row=0;row<2;row++){
        for(col=0;col<2;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter the value of array1: \n");
    for(row=0;row<2;row++){
        for(col=0;col<2;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
    printf("\nArray1: \n");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<2;col++){
            printf("%d ",arr1[row][col]);
        }
    }
    printf("\n\nArray2: \n");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<2;col++){
            printf("%d ",arr2[row][col]);
        }
    }
    printf("\n\nmultiply arrays: ");
    for(row=0;row<2;row++){
        for(col=0;col<2;col++){
            mul[row][col]=0;
            for(int k=0;k<2;k++){
                mul[row][col]+=arr1[row][k]*arr2[k][col];
            }
        }
    }
    printf("\n\nPrinting array:\n");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<2;col++){
            printf("%d ",mul[row][col]);
        }
    }
}