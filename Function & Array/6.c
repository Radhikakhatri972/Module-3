//6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>
int main(){
    int row,col,arr1[2][3],arr2[2][3],sum[2][3],sub[2][3],mul[2][3];
    printf("Enter the value of array1: \n");
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter the value of array2: \n");
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr2[row][col]);
        }
    }

    printf("Array1 :");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",arr1[row][col]);
        }
    }

    printf("\n\nArray2 :");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",arr2[row][col]);
        }
    }
    printf("\n\nsum of array: \n");
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            sum[row][col]=arr1[row][col]+arr2[row][col];
        }
    }
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",sum[row][col]);
        }
    }
    printf("\n\nsubtraction of array: \n");
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            sub[row][col]=arr1[row][col]-arr2[row][col];
        }
    }
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",sub[row][col]);
        }
    }
    printf("\n\nMultiplication of array: \n");
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            mul[row][col]=arr1[row][col]*arr2[row][col];
        }
    }
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",mul[row][col]);
        }
    }
}