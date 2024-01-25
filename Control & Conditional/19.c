/* Display the total electricity bill amount to be paid to the customer
upto 350-@1.20
350 and above but less than 600-@1.50
600 and above but less than 800-@1.80
800 and above-@2.00 + extra surcharge of 18% */

#include<stdio.h>
int main(){

    int id;
    float unit,netamt,netbill;
    char name;
    
    printf("Enter customer id : ");
    scanf("%d",&id);
    printf("Enter name : ");
    scanf("%s",&name);
    printf("Enter consumed unit : ");
    scanf("%f",&unit);

    if(unit<350){
        netamt=unit*1.2;
        printf("Net amount(1.2) : %.2f\n",netamt);
        
        netbill=netamt+(netamt*0.18);
        if(netamt>800){
            
            
            printf("Extra surcharges(18%%) : %.2f\n",netamt*0.18);
            printf("\nYour total electricity bill (@1.20): %.2f\n",netbill);
            printf("\n*If bill exceeds Rs. 800 then a surcharge of 18%% will be charged.");
        }
        else if(netamt<=256){
            printf("\nYour total electricity Net bill Amount : 256.00\n\n*As per terms minimum bill should be of Rs. 256/- ");
        }
        else{
            printf("\nYour total electricity bill (@1.20): %.2f\n",netamt);
        }

        
        
    }
    else if(unit>=350 && unit<600){
        netamt=unit*1.5;
        printf("Net amount(1.5) : %.2f\n",netamt);

        netbill=netamt+(netamt*0.18);
        if(netamt>800){
            
            
            printf("Extra surcharges(18%%) : %.2f\n",netamt*0.18);
            printf("\nYour total electricity bill (@1.50): %.2f\n",netbill);
            printf("\n*If bill exceeds Rs. 800 then a surcharge of 18%% will be charged.");
        }
        else if(netamt<=256){
                printf("\nYour total electricity Net bill Amount : 256.00\n\n*As per terms minimum bill should be of Rs. 256/- ");
        }
        else{
            printf("\nYour total electricity bill (@1.50): %.2f\n",netamt);
        }
        
    }
    else if(unit>=600 && unit<800){
        netamt=unit*1.8;
        printf("Net amount(1.8) : %.2f\n",netamt);

        netbill=netamt+(netamt*0.18);
        if(netamt>800){
            
            
            printf("Extra surcharges(18%%) : %.2f\n",netamt*0.18);
            printf("\nYour total electricity bill (@1.80): %.2f\n",netbill);
            printf("\n*If bill exceeds Rs. 800 then a surcharge of 18%% will be charged.");
        }
        else if(netamt<=256){
            printf("\nYour total electricity Net bill Amount : 256.00\n\n*As per terms minimum bill should be of Rs. 256/- ");
        }
        else{
            printf("\nYour total electricity bill (@1.80): %.2f\n",netamt);
        }
        
        
    }
    else{
        netamt=unit*2.0;
        printf("Net amount(2.0) : %.2f\n",netamt);

        netbill=netamt+(netamt*0.18);
        if(netamt>800){
            
            
            printf("Extra surcharges(18%%) : %.2f\n",netamt*0.18);
            printf("\nYour total electricity bill (@2.0): %.2f\n",netbill);
            printf("\n*If bill exceeds Rs. 800 then a surcharge of 18%% will be charged.");
        }
        else if(netamt<=256){
                printf("\nYour total electricity Net bill Amount : 256.00\n\n*As per terms minimum bill should be of Rs. 256/- ");
        }
        else{
            printf("\nYour total electricity bill (@2.0): %.2f\n",netamt);
        }
        
    }
    
    }