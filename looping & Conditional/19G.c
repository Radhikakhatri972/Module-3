//spiral pattern
#include<stdio.h>
int main(){

    int n,count=1,i,j;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    int arr[n][n];

    for(i=0;i<n;i++){

        for(j=i;j<n-i;j++)
            arr[i][j]=count++;

        for(j=i+1;j<=n-i-1;j++)
            arr[j][n-i-1]=count++;

        for(j=n-i-2;j>=i;j--)
            arr[n-i-1][j]=count++;
        
        for(j=n-2-i;j>i;j--)
            arr[j][i]=count++;

    }
    for(i=0; i<n; i++){
        for(j=0;j<n;j++){
            if(arr[i][j]<10)
            printf("%d   ",arr[i][j]);
            else
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
}