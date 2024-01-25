//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
    
#include<stdio.h>
int main(){

    for(int i=1;i<=5;i++){
        for(int space=5;space>=i;space--){
            printf("   ");
        }
        int a=i*2-1;

        for(int j=1;j<=a;j++){
            printf("*  ");
        }

        printf("\n");
    }
}
