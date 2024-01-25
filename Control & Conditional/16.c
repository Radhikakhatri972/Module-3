/*16.Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/

#include<stdio.h>
int main(){

    float centigrade;

    printf("Enter the temperature in centigrade: ");
    scanf("%f",&centigrade);

    if(centigrade<=0){
        printf("\n%.2fc is Freezing weather.",centigrade);
    }
     else if(centigrade>0 && centigrade<=10){
        printf("\n%.2fc is Very Cold weather.",centigrade);
    }
    else if(centigrade>10 && centigrade<=20){
        printf("\n%.2fc is Cold weather.",centigrade);
    }
    else if(centigrade>20 && centigrade<=30){
        printf("\n%.2fc is Normal in Temp.",centigrade);
    }
    else if(centigrade>20 && centigrade<=40){
        printf("\n%.2fc is Hot.",centigrade);
    }
    else {
        printf("\n%.2fc is Very Hot.",centigrade);
    }
}